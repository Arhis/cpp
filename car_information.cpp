// car_information.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct car
{
	char manufacturer_name[20];
	int year_of_release;
};

int main()
{
	using namespace std;
	//Header
	/*-------------------------------------------*/
	cout << "<<<<< Car collection >>>>>\n\n";
	//Entering how much car will be in catalog
	/*-------------------------------------------*/
	cout << "How much cars put in catalog?: ";
	int count_of_items;
	cin >> count_of_items; 
	cin.get();	
	car *item = new car[count_of_items];
	//Entering all items
	/*-------------------------------------------*/	
	int position_of_car = 0;
	for (int i = 0; i < count_of_items; i++)
	{
		position_of_car++;
		cout << "\nCar #" << position_of_car << ": \n";
		cout << "Enter manifacturer's name: ";
		cin.getline(item[i].manufacturer_name, 20);
		cout << "Enter the year of release:  ";
		cin >> item[i].year_of_release; 
		cin.get();
	}
	//Showing results
	/*-------------------------------------------*/
	int count_of_collection_item = 0;
	cout << "\nHere is your collection: \n";
	for ( int j = 0;  j < count_of_items; j++)
	{
		cout << ++count_of_collection_item << ") " << item[j].year_of_release << " " << item[j].manufacturer_name << endl;
	}
	//--------------------------------------------

	delete[] item;
	system("pause");
	return 0;
}