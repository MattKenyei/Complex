#include "Complex.h"

int main()
{
	Complex x(3.0, 5.0), y(2.0, 5.0);
	x.print();	
	x = x + y;
	x.print();
	return 0;
}