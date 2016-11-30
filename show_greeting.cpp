/* This program ask user to type his name
 * then it makes frame with "*" and spaces to put the name and greeting in.
 * You can see the example below:
 *
 *
 *  ****************
 *  *              *
 *  * Hello Arhis! *
 *  *              *
 *  ****************
*/

#include <iostream>
#include <string>

using std::cout;   using std::endl;
using std::cin;    using std::string;

int main()
{
	//Ask type name
	cout << "Enter your name: ";

	//reading typed name
	string name;
	cin >> name;

	//making message that we need to show
	const string greeting = "Hello " + name + "!";

	//count of spaces that are around greeting
	const int pad = 1;

	//the count of rows and cols that out
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;
	
	//show empty row to separate output and input
	cout << endl;

	//output "rows" strings 
	//invariant while we input "r" rows
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;

		//invariant: while we typed "c" symbols into current row
		while (c != cols) {

			//Should I show (greeting)?
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				// Should I show frame out? 
				if (r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}
    return 0;
}
