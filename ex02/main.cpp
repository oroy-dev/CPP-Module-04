/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:15:27 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/12 17:11:26 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	int		total = 9;
	Animal	**animals = new Animal*[total];

	std::cout << std::endl;
	std::cout << "--- Array Test ---" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < (total / 2); i++)
		animals[i] = new Dog();
	for (int i = (total / 2); i < total; i++)
		animals[i] = new Cat();
	for (int i = 0; i < total; i++)
		delete animals[i];
	delete [] animals;

	std::cout << std::endl;
	std::cout << "--- Copy Test ---" << std::endl;
	std::cout << std::endl;

	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	const Animal*	k = new Animal(*j);
	const Cat*		l = new Cat();
	const Cat*		m = new Cat(*l);

	std::cout << k->getType() << std::endl;
	std::cout << m->getType() << std::endl;
	m->getBrainIdeas(5);

	delete j;
	delete i;
	delete k;
	delete l;
	delete m;

	return 0;
}
