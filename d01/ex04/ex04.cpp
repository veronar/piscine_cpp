/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 16:26:47 by vesingh           #+#    #+#             */
/*   Updated: 2020/05/09 16:26:47 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
using namespace std;

int main()
{
	string str = "HI THIS IS BRAIN";
	string *ptr = &str;
	string &ref = str;

	cout << "String: " << str << endl;
	cout << "Pointer: " << *ptr << endl;
	cout << "Reference: " << ref << endl;

	return (0);
}
