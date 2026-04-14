#include <iostream>
#include "string.h"

void main()
{
	string a("Hola como esta");

	a.print();
	std::cout << a.toCharArray() << std::endl;
}