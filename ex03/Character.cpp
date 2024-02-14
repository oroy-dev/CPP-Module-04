/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:27:26 by oroy              #+#    #+#             */
/*   Updated: 2024/02/14 00:23:01 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*	Canonical Form Requirements --------------------------------------------- */

Character::Character(void) : _name("no_name")
{
	return ;
}

Character::Character(std::string const name) : _name(name)
{
	return ;
}

Character::Character(Character const &src) : _name(src.getName())
{
	*this = src;
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
		// Pas sûr que c'est une copie profonde ici.
		_materia[i] = rhs._materia[i];
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
	_materia[idx]->use(target);
}
