#include <iostream>
#include <math.h>
#include <iomanip>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	while (cin >> n)
	{
		int table2[3] = { 0,1,81 }, table4[5] = { 0,1,2025,3025,9801 }, table6[5] = { 0,1,88209,494209,998001 };
		int table8[9] = { 0,1,4941729,7441984,24502500,25502500,52881984,60481729,99980001 };
		if (n == 2)
			for (int i = 0; i < 3; i++)
				cout << setw(2) << setfill('0') << table2[i] << endl;
		else if(n == 4)
			for (int i = 0; i < 5; i++)
				cout << setw(4) << setfill('0') << table4[i] << endl;
		else if (n == 6)
			for (int i = 0; i < 5; i++)
				cout << setw(6) << setfill('0') << table6[i] << endl;
		else
			for (int i = 0; i < 9; i++)
				cout << setw(8) << setfill('0') << table8[i] << endl;
	}
	/*while (cin >> n)
	{
		if (n == 2)
		{
			for (int i = 0; i < 100; i++)
				if (pow(i / 10 + i % 10, 2) == i)
					cout << setw(2) << setfill('0') << i << endl;
		}
		else if (n == 4)
		{
			for (int i = 0; i < 10000; i++)
				if (pow(i / 100 + i % 100, 2) == i)
					cout << setw(4) << setfill('0') << i << endl;
		}
		else if (n == 6)
		{
			for (int i = 0; i < 1000000; i++)
				if (pow(i / 1000 + i % 1000, 2) == i)
					cout << setw(6) << setfill('0') << i << endl;
		}
		else if (n == 8)
		{
			for (int i = 0; i < 100000000; i++)
				if (pow(i / 10000 + i % 10000, 2) == i)
					cout << setw(8) << setfill('0') << i << endl;
		}
	}*/
	return 0;
}