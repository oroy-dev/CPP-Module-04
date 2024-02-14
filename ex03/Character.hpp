/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:47:50 by oroy              #+#    #+#             */
/*   Updated: 2024/02/13 16:45:50 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:

	std::string	_name;
	AMateria	*_materia[4];

public:

	Character(void);
	Character(std::string name);
	Character(Character const &src);
	Character &operator=(Character const &rhs);
	~Character(void);

	std::string const &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

};

#endif