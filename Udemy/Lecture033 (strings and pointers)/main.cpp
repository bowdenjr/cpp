#include <iostream>

using namespace std;



int main()
{

	string txt = "lalala"; // =  l a l a l a \0

//	for (int i = 0; i < txt.length(); i++)
//	{
//		cout << txt[i] << endl;
//	}

//	char ch = txt[0]; //arrays of characters are just strings
//
//	cout << ch << endl;
//
//	char characters[] = "123456789";
//
//	cout << characters[0] << endl;
//	cout << *(characters) << endl;
//
//	cout << *(characters+1) << endl;
//
//	//Creating a pointer
//
//	char *p = characters;
//
//	cout << p[0] << endl;
//	cout << *(p) << endl;
//
//	cout << p[1] << endl;
//	cout << *(p+1) << endl;

	// char txt2[] = txt; //can't determine size of text2. Can't assign strings to char

//	const char * txt2 = txt.c_str(); //"casting"
//
//	cout << txt2 << endl;
//
//	char arr[] = "here is some text";
//
//	string test = arr;
//
//	cout << test << endl;

	const char * a = "this is a test"; // can't change values. This is created at compile as static. Best to add const as good practice. a is a pointer

	cout << a << endl;

	char b[] = "this is another test 2143";

	b[0] = 'g';

	cout << b << endl;

	char * const dynamic_array = new char[50]; // const stops the address from being changed, again good practice here. Compiler stops it rather than runtime.

	// dynamic_array = "blablabla";

	cout << dynamic_array << endl;

	delete [] dynamic_array;

	string array_of_strings[5] = "this is text that will be in all of the elements of the strings";

	cout << array_of_strings[0] << endl;
	cout << array_of_strings[1] << endl;
	cout << array_of_strings[2] << endl;

	return 0;
}

