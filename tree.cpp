/*
* NEW YEAR SOON   
*    *     
*   *  *
*  *    *
* *      *
*********** 
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string::size_type cols = 41;
	int middle = (cols / 2 );
	int rows = middle;
	string top_space ((middle/2 + middle / 3), ' ');
	
	cout << top_space + "NEW YEAR SOON" << endl;
	for (int r = 0; r != rows; ++r) {		
		string::size_type c = 0;
		while (c != cols) {	
			int spaces_left = middle - r;
			int spaces_right = middle + r;
			if (r == rows - 1 || c == spaces_left ||
				c == spaces_right) {
				cout << "*";
				++c;				
			}
			else {
				cout << " ";
			    ++c;
			}
		}
		cout << endl;
	}
    return 0;
}

