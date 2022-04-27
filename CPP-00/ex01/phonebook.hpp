/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <odursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:19:10 by odursun           #+#    #+#             */
/*   Updated: 2022/04/17 15:50:05 by odursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

#include <iostream>
#include <iomanip> //setw -> width
#include <sstream> //std::sstream

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::setw;
using std::stringstream;

class PhoneBook {
private:
	string _first_name;
	string _last_name;
	string _nick_name;
	string _phone_number;
	string _darkest_secret;

public:
	void input_contact ();

	static void select_index ( PhoneBook list[8] );

	void print_preview ( int index );
};

void PhoneBook::input_contact () {
	cout << "First Name: ";
	cin >> _first_name;
	cout << "Last Name: ";
	cin >> _last_name;
	cout << "Nick Name: ";
	cin >> _nick_name;
	cout << "Phone Number: ";
	cin >> _phone_number;
	cout << "Darkest Secret: ";
	cin >> _darkest_secret;
}

void PhoneBook::select_index ( PhoneBook list[8] ) {
	stringstream ss;
	size_t i;
	string input;

	cout << "Select Index: ";
	cin >> input;
	ss << input;
	ss >> i;
	if ( i >= 0 && i <= 7 && !ss.fail ()) {
		cout << "First Name: " << list[i]._first_name << endl;
		cout << "Last Name: " << list[i]._last_name << endl;
		cout << "Nick Name: " << list[i]._nick_name << endl;
	} else
		cout << "This is an unauthorized number." << endl;
}


void PhoneBook::print_preview ( int index ) {
	cout << "|";
	cout << setw (10) << index;
	cout << "|";
	if ( _first_name.length () <= 10 )
		cout << setw (10) << _first_name;
	else
		cout << setw (10) << _first_name.substr (0, 9) + ".";
	cout << "|";
	if ( _last_name.length () <= 10 )
		cout << setw (10) << _last_name;
	else
		cout << setw (10) << _last_name.substr (0, 9) + ".";
	cout << "|";
	if ( _nick_name.length () <= 10 )
		cout << setw (10) << _nick_name;
	else
		cout << setw (10) << _nick_name.substr (0, 9) + ".";
	cout << "|";
	cout << endl;
}

#endif