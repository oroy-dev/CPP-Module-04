/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:23:25 by oroy              #+#    #+#             */
/*   Updated: 2024/02/13 19:44:44 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*	Canonical Form Requirements --------------------------------------------- */

MateriaSource::MateriaSource(void)
{
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	(void) rhs;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	return ;
}

/*	Member Functions -------------------------------------------------------- */

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
			_materia[i] = materia;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i]->getType() == type)
			return (_materia[i]);
	}
	return (0);
}
