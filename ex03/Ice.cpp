/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:10:33 by oroy              #+#    #+#             */
/*   Updated: 2024/02/13 23:52:46 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*	Canonical Form Requirements --------------------------------------------- */

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const &src) : AMateria(src.getType())
{
	return ;
}

Ice::Ice(std::string const &type) : AMateria(type)
{
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
