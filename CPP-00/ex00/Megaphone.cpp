/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <odursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:56:58 by odursun           #+#    #+#             */
/*   Updated: 2022/04/15 18:26:24 by odursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using	std::cout;
using	std::string;
using	std::endl;

int	main(int argc, char **argv)
{
	if (argc != 1)
		for (int i = 1; i < argc; ++i)
			for (char *p = argv[i]; *p; ++p)
            	cout << (char)toupper(*p);
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	return (0);
}
