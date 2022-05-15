// Created by Onur Dursun on 5/8/22.

#include "../Include/Contact.hpp"
#include "../Include/phoneBook.hpp"

//void print_preview ( int index );

void Contact::show_preview ( PhoneBook list[8] ) {
	cout << "|-------------------------------------------|" << endl;
	cout << "|    INDEX| First Name| Last Name| Nick Name|" << endl;
	for ( int i = 0; i < 8; i++ ) {
		cout << "|-------------------------------------------|" << endl;
		list[i].print_preview (i);
	}
	cout << "|-------------------------------------------|" << endl;
}