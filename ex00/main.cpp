/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:15:27 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/08 16:16:03 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	std::cout << std::endl;
	std::cout << std::endl;

	const Dog* k = new Dog();
	const Cat* l = new Cat();
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	l->makeSound(); //will output the cat sound!
	k->makeSound();

	std::cout << std::endl;
	std::cout << std::endl;

	Animal	*m = new Animal(*j);
	Animal	*n = new Cat();
	n = m;
	std::cout << m->getType() << " " << std::endl;
	std::cout << n->getType() << " " << std::endl;
	m->makeSound(); //will output the dog sound!
	n->makeSound(); //will output the dog sound!

	std::cout << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongi = new WrongCat();
	std::cout << wrongi->getType() << " " << std::endl;
	std::cout << wrongmeta->getType() << " " << std::endl;
	wrongi->makeSound();
	wrongmeta->makeSound();

	return 0;
}
