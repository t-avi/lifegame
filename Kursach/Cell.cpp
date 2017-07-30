#include "Cell.h"


Cell::Cell()
{
	x = 0;
	y = 0;
	Color = gcnew String("Coral");
	Next = nullptr;
}

Cell::~Cell()
{	
}

Cell::Cell(int xx, int yy)
{
	x = xx;
	y = yy;
	Color = gcnew String("Coral");
	Next = nullptr;
}

Cell::Cell(int xx, int yy, String^ cc)
{
	x = xx;
	y = yy;
	Color = gcnew String(cc);
	Next = nullptr;
}
