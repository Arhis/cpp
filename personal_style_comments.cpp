#include <iostream>
#include <string>
#include <cstring>

int main()
{
	using namespace std;
	//-------------------------------
	char charr1[20];
	char charr2[20] = "jaguar";
	//-------------------------------
	string str1;
	string str2 = "panther";
	//-------------------------------
	str1 = str2;
	strcpy(charr1, charr2);
	//-------------------------------
	str1 += " paste";
	strcat(charr1, "juice");
	//-------------------------------
	int length1 = str1.size();
	int length2 = strlen(charr1);
	//-------------------------------
	cout << "The string \"" << str1 << "\" contains "
		<< length1 << " character. \n";
	cout << "The string \"" << charr1 << "\" contains "
		<< length2 << " character \n";

	return 0;
}
