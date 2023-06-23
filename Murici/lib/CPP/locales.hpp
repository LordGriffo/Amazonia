#include <clocale>
#include <iostream>

using namespace std;

int locales()
{
	char *str;
	setlocale(LC_ALL, "");
	
	str = setlocale(LC_ALL, NULL);
	cout << "Current locale: " << str << endl;
	cout << "Changing locale " << endl;
	
	setlocale(LC_ALL, "");
	str = setlocale(LC_ALL, NULL);
	wcout << "Current locale: " << str << endl;
	
	return 0;
}
