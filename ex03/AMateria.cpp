/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:15:52 by oroy              #+#    #+#             */
/*   Updated: 2024/02/13 19:40:49 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*	Canonical Form Requirements --------------------------------------------- */

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
	return ;
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
	return ;
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	(void) rhs;
	return (*this);
}

AMateria::~AMateria(void)
{
	return ;
}

/*	Member Functions -------------------------------------------------------- */

std::string const	&AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	(void) target;
	std::cout << "* Empty Materia *" << std::endl;
}
