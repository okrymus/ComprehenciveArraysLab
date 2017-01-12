#include "pototypes.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// definitions done
void printTitle(ostream &os)      //  DONE
{
	os
		<< endl
		<< "\t          This is a lab on completely filled arrays      " << endl
		<< "\t                        by Lee. Panupong                 " << endl << endl;
}

void printArray(int a[], int ls, int line, ostream &os)     //  DONE
{
	for (int i = 0; i < ls; i++)
		os << setw(4) << a[i] << ((i + 1) % line == 0 ? "\n" : "      ");
}

void loadArrayOf5s(int a[], int ls)     //  DONE
{
	for (int i = 0; i < ls; i++)
		a[i] = 5;
}

void loadEvenArray(int a[], int ls)     //  DONE
{
	for (int i = 0; i < ls; i++)
		a[i] = (i + 1) * 2;
}

void loadOddArray(int a[], int ls)     //  DONE
{
	for (int i = 0; i < ls; i++)
		a[i] = ((i + 1) * 2) - 1;
}

void loadPSA(int a[], int ls)   //  DONE
{
	for (int i = 0; i < ls; i++)
		a[i] = (i + 1) *(i + 1);
}

void loadPrimeArray(int a[], int ls)     //  DONE
{
	int x = 2;

	for (int i = 0; i < ls; i++)
	{
		while (!isPrime(x))
			x++;
		a[i] = x;
		x++;
	}
}

bool isPrime(int number)     //  DONE
{
	for (int count = 2; count < number; count++)
	{
		if (number % count == 0)
			return false;
	}
	return true;
}

char getYorN()     //  DONE
{
	char select;
	cin >> select;  cin.ignore(80, '\n');

	while (!(select == 'y' || select == 'n' || select == 'Y' || select == 'N'))
	{
		cout << "Please type Y or N. Try again :";
		cin >> select;  cin.ignore(80, '\n');
	}
	return select;
}

