#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
    (void)copy;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return (*this);
}

AForm *Intern::makeform(std::string name, std::string target)
{
    std::string form[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
    int i = 0;
    while (i < 3)
    {
        if (name == form[i])
            break;
        i++;
    }
    if (i > 2)
    {
        std::cout << "Intern can't create: " << name << std::endl;
        return 0;
    }
    std::cout << "Intern creates: " << name << std::endl;
    switch (i)
    {
        case 0:
            return new ShrubberyCreationForm(target);
        case 1:
            return new RobotomyRequestForm(target);
        case 2:
            return new PresidentialPardonForm(target);
    }
    return 0;
}

Intern::~Intern()
{
}
