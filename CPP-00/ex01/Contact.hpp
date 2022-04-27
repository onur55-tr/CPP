#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

using std::cout;
using std::string;
using std::setw;
using std::to_string;
using std::endl;

class Contact {
private:
	string _first_name;
	string _last_name;
	string _nick_name;

public:
	static void show_preview ( PhoneBook list[8] );

};


void Contact::show_preview ( PhoneBook list[8] ) {
	cout << "|-------------------------------------------|" << endl;
	cout << "|    INDEX| First Name| Last Name| Nick Name|" << endl;
	for ( int i = 0; i < 8; i++ ) {
		cout << "|-------------------------------------------|" << endl;
		list[i].print_preview (i);
	}
}


#endif //CONTACT_HPP
