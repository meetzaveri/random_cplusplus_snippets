#include <iostream>
#include <stdlib.h>
using namespace std;
 
int main()
{
	system("cls");

	int outer = 1;
	while(outer <= 5 ){
		int inner = 1;
		while(inner <= outer){
			cout << inner++;
		}
		cout << "\n";
		++outer;
	}

 
    return 0;
}