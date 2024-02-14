/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:27:26 by oroy              #+#    #+#             */
/*   Updated: 2024/02/13 19:44:10 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*	Canonical Form Requirements --------------------------------------------- */

Character::Character(void)
{
	return ;
}

Character::Character(std::string name) : _name(name)
{
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		delete _materia[i];
		_materia[i] = rhs._materia[i];
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete _materia[i];
	return ;
}

/*	Member Functions -------------------------------------------------------- */

std::string const	&Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
			_materia[i] = m;
	}
}

void	Character::unequip(int idx)
{
	_materia[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	_materia[idx]->use(target);
}
