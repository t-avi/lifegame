#include "BreedMap.h"
#using <system.dll>
using namespace System;
using namespace System::IO;

using namespace System::Windows::Forms;

BreedMap::BreedMap() //�����������
{
	Head = nullptr;
}

BreedMap::~BreedMap() //����������
{
	while(this->Head)
	{
		Cell^ c = Head;
		Head = Head->Nex;
		c->~Cell();
	}
}

void BreedMap::RandomGenerate(int i) //��������
{
	for (int j = 0; j < i; j++) {
		this->Add(rand() % gridRows, rand() % gridColumns);
	}
}

int BreedMap::LoadMap(String^ fileName)
{	
	try
	{
		StreamReader^ din = File::OpenText(fileName);
		String^ str;
		String^ num1 = "";
		String^ num2 = "";
		int count = 0;
		while ((str = din->ReadLine()) != nullptr)
		{
			count++;
			int j = str->Length;
			for (int i = 0; i < j; i++) {
				if (Char::ConvertFromUtf32(str[i]) != "_") {
					num2 = num2 + str[i];
				}
				else { 
					num1 = num2;
					num2 = "";
				}
			}
			Add(num1, num2);
			num1 = "";
			num2 = "";
		}
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
			Console::WriteLine("file '{0}' not found", fileName);
		else
			Console::WriteLine("problem reading file '{0}'", fileName);
	}
	return 0;

}

int BreedMap::SaveMap(String^ fileName)
{
	StreamWriter^ sw = gcnew StreamWriter(fileName);

	CellIterator iterBeg(this->Head);
	CellIterator iterEn(0);
	for (; iterBeg.Cur != iterEn.Cur; iterBeg++) {
		sw->WriteLine(iterBeg.Cur->X.ToString() + "_" + iterBeg.Cur->Y.ToString());
	}	
	sw->Close();
	return 0;

}

void BreedMap::Add(Cell ^NewCell) //��������, ��������� �� ���� ����
{
	if ((NewCell->X >= 0 && NewCell->Y >= 0 && NewCell->X <= gridRows && NewCell->Y <= gridRows) && !this->Search(NewCell)) {
		Cell^ OldCell;
		OldCell = Head;
		Head = NewCell;
		NewCell->Nex = OldCell;
	}	
}

void BreedMap::Add(int x, int y) //��������, ��������� �� ���� ����
{
	Cell^ NewCell = gcnew Cell(x, y);
	this->Add(NewCell);
}

void BreedMap::Add(String^ xs, String^ ys) //��������, ��������� �� ���� ����
{
	int x;
	int y;
	x = Convert::ToInt32(xs);
	y = Convert::ToInt32(ys);

	Cell^ NewCell = gcnew Cell(x, y);
	this->Add(NewCell);
}

bool BreedMap::Del() //������ �� ������������, �� �������� ������ ���
{
	if (Head) {
		this->~BreedMap();
		return true;
	}
	else return false;
}

bool BreedMap::Search(Cell^ C) //��������
{
	CellIterator iterBeg(this->Head);
	CellIterator iterEn(0);
	bool flag = false;

	for (; iterBeg.Cur != iterEn.Cur; iterBeg++) {
		if (iterBeg.Cur->X == C->X && iterBeg.Cur->Y == C->Y){
			flag = true;
		}
	}

	return flag;		
}

void BreedMap::ReviveCell(Cell^ Verifable, BreedMap^ NewMap) //��������
{
	if ((Verifable->Neib == 3) || (this->Search(Verifable) && Verifable->Neib == 2)) {
		NewMap->Add(Verifable);
	}
}

void BreedMap::Join(BreedMap^ NewMap) //��������
{	
	Del();
	while (NewMap->Head) {
		Add(NewMap->Head->X, NewMap->Head->Y);
		NewMap->Head = NewMap->Head->Nex;
	}
}

int BreedMap::Neibours(int xx, int yy, BreedMap^ NewMap) //��������
{
	NeiCount = 0;
	Cell^ Verifable = gcnew Cell(xx, yy);

	CellIterator iterBeg(this->Head);
	CellIterator iterEn(0);

	for (; iterBeg.Cur != iterEn.Cur; iterBeg++) {
		if (iterBeg.Cur->X == xx - 1 && iterBeg.Cur->Y == yy - 1)
			{ NeiCount++; }
		if (iterBeg.Cur->X == xx - 1 && iterBeg.Cur->Y == yy)
			{ NeiCount++; }
		if (iterBeg.Cur->X == xx &&     iterBeg.Cur->Y == yy - 1)
			{ NeiCount++; }
		if (iterBeg.Cur->X == xx + 1 && iterBeg.Cur->Y == yy - 1)
			{ NeiCount++; }
		if (iterBeg.Cur->X == xx - 1 && iterBeg.Cur->Y == yy + 1)
			{ NeiCount++; }
		if (iterBeg.Cur->X == xx + 1 && iterBeg.Cur->Y == yy + 1)
			{ NeiCount++; }
		if (iterBeg.Cur->X == xx + 1 && iterBeg.Cur->Y  == yy)
			{ NeiCount++; }
		if (iterBeg.Cur->X == xx &&	   iterBeg.Cur->Y == yy + 1)
			{ NeiCount++; }
	}
	Verifable->Neib = NeiCount;
	this->ReviveCell(Verifable, NewMap);
	return NeiCount;
}

void BreedMap::Update(Windows::Forms::DataGridView^ Map, Windows::Forms::ListBox^ List, BreedMap^ NewMap) //��������
{
	NeiCount = 0;

	CellIterator iterBeg(this->Head);
	CellIterator iterEn(0);	

	for (int i = 0; i < Map->RowCount; i++) {
		for (int j = 0; j < Map->ColumnCount; j++) {
			//Map->Rows[i]->Cells[j]->Value = Neibours(i, j, NewMap).ToString();
			Neibours(i, j, NewMap);
		}
	}	

	//������� � ���� ���� 2 ������� ��������� �������

	CellIterator i(Hed);
	CellIterator j(0);

	List->Items->Clear();
	for (; i.Cur != j.Cur; i++) {
		List->Items->Add("i=" + i.Cur->X.ToString() + " " + "j=" + i.Cur->Y.ToString());
	}

	this->Join(NewMap);

	for (int m = 0; m < Map->RowCount; m++) {
		for (int n = 0; n < Map->ColumnCount; n++){
			Map->Rows[m]->Cells[n]->Style->BackColor = Drawing::Color::White;			
		}
	}

	for (; iterBeg.Cur != iterEn.Cur; iterBeg++) {
		Map->Rows[iterBeg.Cur->X]->Cells[iterBeg.Cur->Y]->Style->BackColor = Drawing::Color::DarkOrchid;

	}

}