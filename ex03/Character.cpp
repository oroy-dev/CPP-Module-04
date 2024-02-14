/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:27:26 by oroy              #+#    #+#             */
/*   Updated: 2024/02/14 18:14:18 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*	Canonical Form Requirements --------------------------------------------- */

Character::Character(void) : _name("no_name")
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	return ;
}

Character::Character(std::string const name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	return ;
}

Character::Character(Character const &src) : _name(src.getName())
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	*this = src;
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
		if (rhs._materia[i])
			_materia[i] = rhs._materia[i]->clone();
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
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
		{
			_materia[i] = m;
			break ;	
		}
	}
}

void	Character::unequip(int idx)
{
	_materia[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && _materia[idx])
		_materia[idx]->use(target);
}

AMateria	*Character::getMateriaAddress(int idx) const
{
	return (_materia[idx]);
}
