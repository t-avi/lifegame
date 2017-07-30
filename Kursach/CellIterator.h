#pragma once
#include"Cell.h"
ref class CellIterator
{
private:
	Cell^ current;
public:
	    
		CellIterator(Cell^);
		CellIterator(int);
		CellIterator();
		void operator ++ ()
		{
			current = current->Nex;
		}

		Cell^ operator* ()
		{
			return current;
		}

		bool operator == (CellIterator right)
		{
			return current == right.current;
		}

		bool operator != (CellIterator right)
		{
			return current != right.current;
		}

		property Cell^ Cur {
			Cell^ get() {
				return current;
			}
		}

};

