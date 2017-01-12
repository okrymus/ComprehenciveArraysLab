// Functions Pototype
#include <iostream>
#include <string>
using namespace std;

// Pre condition:  NONE
// Post condition: Print a centered title for the program
//                 and write the title in a file
void printTitle(ostream &os = cout);     //   done

// Pre condition:  0 <= "size" <= logical size of a[]
// Post condition: Print the "size" elements of a[], with n per line   
//                 and write the "size" elements of a[], with n per line
void printArray(int a[], int ls, int line = 5, ostream &os = cout);

// Pre condition:  0 <= "size" <= logical size of a[] 
// Post condition: Initializes 5 number within a[] to hold 5 in each elements
void loadArrayOf5s(int a[], int ls);

// Pre condition:  0 <= "size" <= logical size of a[] 
// Post condition: Initializes even numbers within a[] to hold the numbers in each elements
void loadEvenArray(int a[], int ls);

// Pre condition:  0 <= "size" <= logical size of a[] 
// Post condition: Initializes odd numbers within a[] to hold the numbers in each elements
void loadOddArray(int a[], int ls);

// Pre condition:  0 <= "size" <= logical size of a[] 
// Post condition: Initializes perfect square numbers within a[] to hold the numbers in each elements
void loadPSA(int a[], int ls);

// Pre condition:  0 <= "size" <= logical size of a[] 
// Post condition: Initializes prime numbers within an array to hold the numbers in each elements
void loadPrimeArray(int a[], int ls);

// Pre condition:  number > 2
// Post condition: Return false when the number is not prime 
//                 or return true when the number is prime
bool isPrime(int number);

// Pre condition:  NONE
// Post condition: Return a letter: "n", "N", "y", or "Y"
//                 removes everything else from the cin
char getYorN();

