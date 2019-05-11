#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
	int integer[10] = {1,6,9,10,12,17,21,25,50,69};
	int sum = 0;
	int max = integer[0];
	int min = integer[0];


	cout << "1, 6, 9, 10, 12, 17, 21, 25, 50, 69" << endl;
	for (int i = 1; i < 10; i++) {
		if (integer[i] < min) { 
			min = integer[i];
		}
	}
	cout << "The smallest integer is: " << min << endl;


	for (int i = 1; i < 10; i++) {
		if (integer[i] > max) { 
			max = integer[i];
		}
	}
	cout << "The largest integer is: " << max << endl;


	for (int i = 0; i < 10; i++) {
		sum = sum + integer[i];
	}

	cout << "The sum is: " << sum << endl;
	cout << "The average is: " << sum/10 << endl;
		


getch();
return 0;
}