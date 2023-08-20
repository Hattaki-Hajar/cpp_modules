#pragma once

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
    /* Canonical form */
    Intern();
    Intern(const Intern &copy);
    Intern &operator=(const Intern &other);
    ~Intern();
    /* Additional func */
    AForm *makeForm(std::string name, std::string target);
};
