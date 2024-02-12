/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:54:37 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/09 15:46:38 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>
# include <string>

# ifndef	WANIMAL_PREFIX
#  define 	WANIMAL_PREFIX "\033[1;33m[WrongAnimal]\033[0m	"
# endif /*  WANIMAL_PREFIX */

class WrongAnimal
{
protected:

	std::string	type;

public:

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal &operator=(WrongAnimal const &rhs);
	virtual ~WrongAnimal(void);

	std::string		getType(void) const;
	virtual void	makeSound(void) const;
};

#endif
