// The program use loading array
// Comprehensive Arrays
// Programmer: Panupong Leenawarat
// Last modified

#include <iostream>
#include <fstream>
#include <string>
#include "pototypes.h"
using namespace std;

int main()  // main is DONE
{
	const int SIZE_OF_A5 = 139,
		SIZE_OF_AEVEN = 90,
		SIZE_OF_AODD = 100,
		SIZE_OF_APRIME = 42,
		SIZE_OF_APSA = 120;
	int a5[SIZE_OF_A5],
		aEven[SIZE_OF_AEVEN],
		aOdd[SIZE_OF_AODD],
		aPrime[SIZE_OF_APRIME],
		aPSA[SIZE_OF_APSA];
	char option;
	string fileName;
	ofstream newFile;

	system("COLOR 3F");

	printTitle();
	// print 5 array          DONE
	cout << endl << "I am about to call loadArrayOf5s" << endl;
	loadArrayOf5s(a5, SIZE_OF_A5);
	cout << "Finished loadding loadArrayOf5s ..." << endl;

	cout << "I am about to call printArray(with the default value for the perLine)..." << endl << endl;
	printArray(a5, SIZE_OF_A5);
	cout << endl << endl;

	system("pause");

	// print even array          DONE
	cout << endl << "I am about to call loadEvenArray ..." << endl;
	loadEvenArray(aEven, SIZE_OF_AEVEN);
	cout
		<< "Finished loadding EvenArray ..." << endl;

	cout << "I am about to call printArray(with 4 perLine)..." << endl << endl;
	printArray(aEven, SIZE_OF_AEVEN, 4);
	cout << endl << endl;

	system("pause");

	// print odd array          DONE
	cout << endl << "I am about to call loadOddArray ..." << endl;
	loadOddArray(aOdd, SIZE_OF_AODD);

	cout << "Finished loadding oddArray ..." << endl;

	cout << "I am about to call printArray(with 3 perLine) ..." << endl << endl;
	printArray(aOdd, SIZE_OF_AODD, 3);
	cout << endl << endl;

	system("pause");

	// print perfect square array          DONE
	cout << endl << "I am about to call loadPSA ..." << endl;
	loadPSA(aPSA, SIZE_OF_APRIME);

	cout
		<< "Finished loadding loadPSA ..." << endl
		<< "I am about to call printArray(with 1 perLine)..." << endl << endl;
	printArray(aPSA, SIZE_OF_APRIME, 1);
	cout << endl << endl;

	system("pause");

	// print prime array          DONE
	cout << endl << "I am about to call  loadPrimeArray ...";
	loadPrimeArray(aPrime, SIZE_OF_APSA);

	cout
		<< "Finished loadding PrimeArray ..." << endl
		<< "I am about to call printArray(with 2 perLine) ..." << endl << endl;
	printArray(aPrime, SIZE_OF_APSA, 3);
	cout << endl << endl;

	system("pause");

	cout << "\nDo you want to output the arrays to a file ? ";
	option = getYorN();

	// it asks for a name to store the data within the named file
	if (option == 'y' || option == 'Y')
	{
		cout << "What file do you want to output the array? ";
		getline(cin, fileName);
		newFile.open(fileName);

		while (!newFile)     // done
		{
			cout
				<< "\tThe program failed to use the name file: \"" << fileName << "\". " << endl
				<< "\tPlease enter another name: ";
			getline(cin, fileName);
			newFile.open(fileName);
		}

		printTitle(newFile);

		newFile << "Here are the first" << SIZE_OF_A5 << "elements of the arrayOf5s two per line : " << endl;
		printArray(a5, SIZE_OF_A5, 2, newFile);
		newFile << endl << endl;

		newFile
			<< "\t\t***********************************************" << endl << endl
			<< "Here are the first" << SIZE_OF_AEVEN << "even numbers two per line : " << endl;
		printArray(aEven, SIZE_OF_AEVEN, 2, newFile);
		newFile << endl << endl;

		newFile
			<< "\t\t***********************************************" << endl << endl
			<< "Here are the first" << SIZE_OF_AODD << "odd number three per lines : " << endl;
		printArray(aOdd, SIZE_OF_AODD, 3, newFile);
		newFile << endl << endl;

		newFile
			<< "\t\t***********************************************" << endl << endl
			<< "Here are the first" << SIZE_OF_APRIME << "perfect squares number three per lines : " << endl;
		printArray(aPSA, SIZE_OF_APRIME, 3, newFile);
		newFile << endl << endl;

		newFile
			<< "\t\t***********************************************" << endl << endl
			<< "Here are the first" << SIZE_OF_APSA << "prime numbers one per line :" << endl;
		printArray(aPrime, SIZE_OF_APSA, 1, newFile);
		newFile << endl << endl;

		newFile.close();
	}

	cout << endl;
	system("pause");
	return 0;
}

