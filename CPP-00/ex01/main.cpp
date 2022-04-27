/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <odursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:18:34 by odursun           #+#    #+#             */
/*   Updated: 2022/04/17 15:47:17 by odursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "Contact.hpp"

int main () {
	string cmd;
	PhoneBook list[8];
	Contact list1[8];
	int idx;

	idx = 0;
	cout << "**** 80's Phone Record ****" << endl;
	while ( true ) {
		cout << "Use Search, Add to add one, Exit";
		cout << "\n\t1. Add Phone Record";
		cout << "\n\t2. Search Phone Record";
		cout << "\n\t3. Exit";
		cout << "\nWhat's a next? ";
		cin >> cmd;
		if ( cmd == "ADD" || cmd == "Add" || cmd == "add" || cmd == "1" ) {
			system ("clear");
			idx %= 8;
			list[idx].input_contact ();
			idx++;
		} else if ((cmd == "SEARCH" || cmd == "Search" || cmd == "search" ||
					cmd == "2") && idx > 0 ) {
			system ("clear");
			list1[8].show_preview (list);
			list[8].select_index (list);
		} else if ((cmd == "SEARCH" || cmd == "Search" || cmd == "search" ||
					cmd == "2") && idx == 0 )
			cout << "Come on... You didn't add one anything.";
		else if ( cmd == "EXIT" || cmd == "Exit" || cmd == "exit" || cmd == "3" ) {
			system ("clear");
			exit (EXIT_SUCCESS);
		} else
			cout << "This is an unauthorized word" << endl;
	}
	return (0);
}
