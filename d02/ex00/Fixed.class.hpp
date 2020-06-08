/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 14:17:37 by vesingh           #+#    #+#             */
/*   Updated: 2020/06/08 14:17:37 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
using namespace std;

class Fixed
{
public:
	// Constructor
	Fixed(void);
	// Desructor
	~Fixed(void);
	// Copy Constructor
	Fixed(const Fixed &source);
	// Overloaded Assignment operator
	Fixed&	operator=(const Fixed &rhs); //rhs aka source


private:
};

#endif
