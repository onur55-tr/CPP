#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include "phoneBook.hpp"

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

#endif //CONTACT_HPP
