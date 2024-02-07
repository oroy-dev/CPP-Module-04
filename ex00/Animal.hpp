/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:54:37 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/06 21:32:20 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

# ifndef	ANIMAL_PREFIX
#  define 	ANIMAL_PREFIX "\033[1;33m[Animal]\033[0m	"
# endif /*  ANIMAL_PREFIX */

class Animal
{
protected:

	std::string	type;

public:

	Animal(void);
	Animal(Animal const &src);
	Animal &operator=(Animal const &rhs);
	~Animal(void);

	std::string		getType(void) const;
	virtual void	makeSound(void) const;
};

#endif
