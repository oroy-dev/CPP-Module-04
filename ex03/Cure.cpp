/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:59:24 by oroy              #+#    #+#             */
/*   Updated: 2024/02/13 23:49:57 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

/*	Canonical Form Requirements --------------------------------------------- */

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const &src) : AMateria(src.getType())
{
	return ;
}

Cure::Cure(std::string const &type) : AMateria(type)
{
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
