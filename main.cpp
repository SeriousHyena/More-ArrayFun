

/*
use for loop to populate an array with 10 elements 
the elements will the the numbers from 1-10
write a seperate range-based loop  to print out out the array elements
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int arrayTen[11];
	int counter = 1;

	for (int i = 1; i < 11; i++)
	{
		arrayTen[i] = i;
		cout << arrayTen[i]<<endl;
	}
	for (int i = 1; i < 11; i++)
	{
		cout << arrayTen[i];
	}
	return 0;
}