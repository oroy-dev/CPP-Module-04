/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:15:27 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/09 16:58:19 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int		total = 10;
	Animal	*animals = new Animal[total];

	for (int i = 0; i < (total / 2); i++)
		animals[i] = new Dog();
	for (int i = (total / 2); i < total; i++)
		animals[i] = new Cat();

	delete [] animals;

	return 0;
}
