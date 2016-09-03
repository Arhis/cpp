#include "stdafx.h"
#include <iostream>
#define SOUND '\a'
#define NEXT_LINE '\n'


int main()
{
	using namespace std;

	cout << SOUND << "Don't do that again!" << SOUND << NEXT_LINE;
	cout << "Here was I! hahahaha";

	cin.get();
    return 0;
}

