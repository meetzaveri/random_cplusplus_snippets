#include <stdlib.h>
#include <iostream>
using namespace std;

int add(int x, int y) // add's x and y are created here and can only be seen/used within add() after this point
{
    return x + y;
}  

int main()
{
  system("cls");
 	
 	int x = 5; 
    int y = 6; 
 
    cout << add(5, 5) << endl;

 	cout << "heloo";
  return 0;
}