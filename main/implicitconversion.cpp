#include <iostream>
#include <stdlib.h>
#include <typeinfo> // for typeid()
 
int main()
{
	system("cls");
    short a(4);
    short b(5);
    std::cout << typeid(a + b).name() << " " << a + b << std::endl; // show us the type of a + b
 
    return 0;
}