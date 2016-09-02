// YearsToMonths.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

int converter(int*);

int main()
{
	using namespace std;

	int age;
	cout << "Enter your age: ";
	cin >> age;
	int*b = &age;

	cout << "Your age in months is " << converter(b);
	cin.get();
	cin.get();

    return 0;
}

int converter(int *years)
{
	return 12 * *years;
}

