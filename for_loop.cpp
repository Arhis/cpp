// The program's calculating values of sum of all numbers from first to second numbers
// If first number bigger than second, than second one will be replaced first and first by second. 

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;

	int *numbers = new int[2];
	
	cout << "<<< Welcome >>>\n\n\a";
	cout << "Enter the number one: "; 
	cin >> numbers[0]; //Enter number one

	cout << "Enter the number two: ";
	cin >> numbers[1]; //Enter number two

	if (numbers[0] > numbers[1]) //If number one is bigger than number two
	{
		int temp = 0;
		temp = numbers[1];
		numbers[1] = numbers[0];
		numbers[0] = temp;
	}


	int sum = 0;
	for (int i = numbers[0]; i <= numbers[1]; i++) //calculating the sum of numbers
	{
		sum += i;		
	}

	cout << "\nRESULT:\nThe sum of numbers between " << numbers[0];
	cout << " and " << numbers[1] << " = " << sum << endl;

	delete[] numbers;
	system("pause");
    return 0;
}

