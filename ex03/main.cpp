/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:29:02 by oroy              #+#    #+#             */
/*   Updated: 2024/02/14 18:21:37 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Supernova.hpp"
#include "MateriaSource.hpp"

// int main(void)
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter* me = new Character("me");

// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");

// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }

int	main(void)
{
	// Create Materia Source
	IMateriaSource* src = new MateriaSource();

	// Create Characters
	ICharacter* cloud = new Character("cloud");
	ICharacter* sephiroth = new Character("sephiroth");

	Character*	barrett = new Character("barrett");
	
	// Fill Materia Source with different materias 
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Supernova());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	// Equip materias for Cloud
	cloud->equip(src->createMateria("ice"));
	cloud->equip(src->createMateria("cure"));
	cloud->equip(src->createMateria("ice"));
	cloud->equip(src->createMateria("fire"));

	// Equip materias for Barrett
	barrett->equip(src->createMateria("ice"));
	barrett->equip(src->createMateria("cure"));

	// Copy Character Test
	Character*	yuffie = new Character(*barrett);
	
	// Unequip test. Storing the address of the lost materia to requip or delete later
	AMateria	*item;
	item = cloud->getMateriaAddress(3);
	cloud->unequip(3);

	// Equip materias for Sephiroth
	sephiroth->equip(src->createMateria("supernova"));
	sephiroth->equip(item);

	// Use Materias
	cloud->use(0, *sephiroth);
	cloud->use(1, *cloud);
	cloud->use(2, *sephiroth);
	cloud->use(3, *sephiroth);
	sephiroth->use(1, *cloud);
	sephiroth->use(0, *cloud);

	// Delete Characters and Materia Source
	delete	cloud;
	delete	sephiroth;
	delete	src;
	delete	barrett;
	delete	yuffie;

	return 0;
}
