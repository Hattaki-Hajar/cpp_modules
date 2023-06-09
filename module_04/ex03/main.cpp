/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:59:20 by hhattaki          #+#    #+#             */
/*   Updated: 2023/06/09 21:33:50 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void    func1(void)
{   
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    delete tmp;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
}

void func2()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    Character* me = new Character("meh");
    AMateria* tmp = NULL;
    tmp = src->createMateria("test");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* enemy = new Character("enemy");
    me->use(0, *enemy);
    me->use(1, *enemy);
    AMateria *itemIntheFoor = me->getMateria(0);
    std::cout << "*********************\n";
    me->unequip(0);
    delete enemy;
    delete me;
    delete src;
    delete tmp;
    if (itemIntheFoor)
        delete itemIntheFoor;
}

int main()
{
    func1();
    std::cout << "---------------TEST2-------------" << std::endl;
    func2();
    system("leaks Materia");
}
