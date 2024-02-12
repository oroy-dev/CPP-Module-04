/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:50:45 by oroy              #+#    #+#             */
/*   Updated: 2024/02/12 15:57:14 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class Brain
{
private:

	std::string	_ideas[100];

public:

	Brain(void);
	Brain(Brain const &src);
	Brain &operator=(Brain const &rhs);
	~Brain(void);

	void	setIdeas(std::string const idea);
	void	getIdeas(int const total) const;

};

# ifndef	BRAIN_PREFIX
#  define 	BRAIN_PREFIX "\033[1;34m[Brain]\033[0m		"
# endif /*  BRAIN_PREFIX */

#endif