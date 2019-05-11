#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main()
{

    int temp[3][7];

    cout << "Enter all temperature for a week of Province A, Province B, and then Province C. " << endl;

    for (char a = 0; a < 3; a++)
    {
        for(int b = 0; b < 7; b++)
        {
            cout << "Province " << a + 1 << ", Day " << b + 1 << " : ";
            cin >> temp[a][b];
        }
    }

	cout << endl;
    cout << "Displaying Values: " << endl;

    for (char a = 0; a < 3; ++a)
    {
        for(int b = 0; b < 7; ++b)
        {
            cout << "Province " << a + 1 << ", Day " << b + 1 << " = " << temp[a][b] << endl;
        }
    }

	getch();
    return 0;
}