/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:10:33 by oroy              #+#    #+#             */
/*   Updated: 2024/02/13 16:24:34 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*	Canonical Form Requirements --------------------------------------------- */

Ice::Ice(void)
{
	return ;
}

Ice::Ice(Ice const &src)
{
	*this = src;
	return ;
}

Ice::Ice(std::string const &type)
{
	_type = type;
	return ;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	(void) rhs;
	return (*this);
}

Ice::~Ice(void)
{
	return ;
}

/*	Member Functions -------------------------------------------------------- */

AMateria	*Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
