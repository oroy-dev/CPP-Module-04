/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:59:24 by oroy              #+#    #+#             */
/*   Updated: 2024/02/13 17:03:44 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

/*	Canonical Form Requirements --------------------------------------------- */

Cure::Cure(void)
{
	return ;
}

Cure::Cure(Cure const &src)
{
	*this = src;
	return ;
}

Cure::Cure(std::string const &type)
{
	_type = type;
	return ;
}

Cure	&Cure::operator=(Cure const &rhs)
{
	(void) rhs;
	return (*this);
}

Cure::~Cure(void)
{
	return ;
}

/*	Member Functions -------------------------------------------------------- */

AMateria	*Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
