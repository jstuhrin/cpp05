
#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

std::string formNames[9] = {"presidential pardon", "robotomy request", "shrubbery creation",
                                "presidential pardon form", "robotomy request form", "shrubbery creation form",
                                "PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

Intern::Intern() {}

Intern::Intern(const Intern& other)
{
  (void)other;
}

Intern& Intern::operator=(const Intern& other)
{
  (void)other;
  return *this;
}

Intern::~Intern() {}

AForm* Intern::makePresidentialPardonForm(const std::string& target)
{
  return new PresidentialPardonForm(target);
}

AForm* Intern::makeRobotomyRequestForm(const std::string& target)
{
  return new RobotomyRequestForm(target);
}

AForm* Intern::makeShrubberyCreationForm(const std::string& target)
{
  return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
  AForm* (*functionPointers[3])(const std::string&) = {Intern::makePresidentialPardonForm, Intern::makeRobotomyRequestForm, Intern::makeShrubberyCreationForm};

  for (int i = 0; i < formNames.size(); ++i)
  {
    if (formName == formNames[i % 3])
    {
      return *Intern::functionPointers[i % 3](target);
    }
  }
  std::cerr << "formName does not exist - no form created\n";
  return NULL;
}