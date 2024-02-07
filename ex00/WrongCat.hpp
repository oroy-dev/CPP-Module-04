/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:54:37 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/06 22:16:18 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

# ifndef	WCAT_PREFIX
#  define 	WCAT_PREFIX "\033[1;32m[WrongCat]\033[0m	"
# endif /*  WCAT_PREFIX */

class WrongCat : public WrongAnimal
{
public:

	WrongCat(void);
	WrongCat(WrongCat const &src);
	WrongCat &operator=(WrongCat const &rhs);
	virtual	~WrongCat(void);

	virtual void	makeSound(void) const;
};

#endif
