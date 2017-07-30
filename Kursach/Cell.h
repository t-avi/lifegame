#pragma once
using namespace System;
ref class Cell
{
	String^ Color;
	int x;
	int y;
	int Neibour;
	Cell^ Next;
	

public:

	Cell();
	~Cell();
	Cell(int, int);
	Cell(int, int, String^);

	property Cell^ Nex
	{
		Cell^ get()
		{
			return Next;
		}
		void set(Cell^ N)
		{
			Next = N;
		}
	}

	property String^ Col
	{
		String^ get()
		{
			return Color;
		}
		void set(String^ C)
		{
			Color = C;
		}
	}

	property int X
	{
		int get()
		{
			return x;
		}
		void set(int X)
		{
			x = X;
		}
	}

	property int Y
	{
		int get()
		{
			return y;
		}
		void set(int Y)
		{
			y = Y;
		}
	}

	property int Neib
	{
		int get()
		{
			return Neibour;
		}
		void set(int X)
		{
			Neibour = X;
		}
	}
};



