#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{

	char arr[]= {'c','o','b','a','r','r','u','b','i','a','s','\0'};
	cout << arr << endl;
	
	cout << "The output is: ";

	int a =- 1;
	while (arr[++a] != '\0');
	a--;

	for (int b = a; b >= 0; b--)

    cout << arr[b];
	cout << endl;
	cout << "The size of the array is: " << a << endl;

	getch();
	return 0;
}
