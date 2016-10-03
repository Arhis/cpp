// exc_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	
	int years = 0;
	double dafna_sum = 100;	
	double cleo_sum = 100;

	do 
	{ 
		dafna_sum += 10.0;
		cleo_sum += cleo_sum * 0.05;
		years++;
		cout << "It's " << years << " year.\n";
		cout << "Dafna has " << dafna_sum << endl;
		cout << "Cleo has " << cleo_sum << endl << endl;
		
	} 
	while (cleo_sum < dafna_sum);

	cout <<"Cleo will need " <<  years << " years.\n\a";
	system("pause");

    return 0;
}

