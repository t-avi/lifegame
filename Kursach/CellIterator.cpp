#include "CellIterator.h"


CellIterator::CellIterator(Cell^ s1)
{
	current = s1;
}

CellIterator::CellIterator(int i)
{
	current = nullptr;
}

CellIterator::CellIterator()
{
	current = nullptr;
}
