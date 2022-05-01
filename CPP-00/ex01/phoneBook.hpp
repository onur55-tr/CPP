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

#endif