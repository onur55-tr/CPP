// Created by Onur Dursun on 19.04.2022.

#include <iostream>

using std::cout;
using std::string;
using std::endl;

int main(void)
{
	string string1 = "HI THIS IS STRING";
	string *stringPTR = &string1;
	string &stringREF = string1;

	cout << "Original String Adress: " << &string1 << endl;
	cout << "using stringPTR: " << &(*stringPTR) << endl;
	cout << "using stringREF: " << &stringREF << endl;
	cout << "Original String: " << string1 << endl;
	cout << "stringPTR: " << *stringPTR << endl;
	cout << "stringREF: " << stringREF << endl;

}