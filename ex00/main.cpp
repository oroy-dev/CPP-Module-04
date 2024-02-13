/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:15:27 by olivierroy        #+#    #+#             */
/*   Updated: 2024/02/12 20:38:13 by olivierroy       ###   ########.fr       */
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
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //will output nothing
	
	std::cout << std::endl;
	std::cout << std::endl;

	const Dog* k = new Dog();
	const Animal* m = new Dog(*k);
	std::cout << m->getType() << " " << std::endl;
	m->makeSound(); //will output the dog sound!

	std::cout << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongi = new WrongCat();
	std::cout << wrongi->getType() << " " << std::endl;
	std::cout << wrongmeta->getType() << " " << std::endl;
	wrongi->makeSound();
	wrongmeta->makeSound();

	std::cout << std::endl;
	std::cout << std::endl;

	delete wrongi;
	delete wrongmeta;
	delete m;
	delete k;
	delete i;
	delete j;
	delete meta;

	return 0;
}
