#pragma once
#include"CellIterator.h"
#include <cstdlib>
using namespace System;
ref class BreedMap
{
	Cell^ Head;
	int NeiCount;
	int gridRows;
	int gridColumns;

public:
	BreedMap();
	~BreedMap();
	void Add(Cell^ NewCell);
	void Add(int, int);
	void Add(String^, String^);
	int SaveMap(String^);
	int LoadMap(String^);
	bool Del();
	void Update(Windows::Forms::DataGridView^, Windows::Forms::ListBox^, BreedMap^);
	int Neibours(int, int, BreedMap^);
	void ReviveCell(Cell^, BreedMap^);
	bool Search(Cell^);
	void Join(BreedMap^);
	void RandomGenerate(int);

	property Cell^ Hed {
		Cell^ get() {
			return Head;
		}
	}

	property int Row
	{
		int get()
		{
			return gridRows;
		}
		void set(int C)
		{
			gridRows = C;
		}
	}

	property int Col
	{
		int get()
		{
			return gridColumns;
		}
		void set(int C)
		{
			gridColumns = C;
		}
	}
};
