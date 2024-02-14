/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:23:25 by oroy              #+#    #+#             */
/*   Updated: 2024/02/14 18:19:48 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*	Canonical Form Requirements --------------------------------------------- */

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
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
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
	return ;
}

/*	Member Functions -------------------------------------------------------- */

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
		{
			_materia[i] = materia;
			return ;
		}
	}
	delete materia;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return (0);
}
