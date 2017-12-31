#include <iostream>
#include <stdlib.h>
#include "add.h" // import BasicMath::add()
using namespace std;

int main(void)
{
	system("cls");
    cout << BasicMath::add(4, 3) << '\n';
 
    return 0;
}