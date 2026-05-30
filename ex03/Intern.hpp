#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
  public:
    // OCF is pointless, since the Intern class does not manage raw resources, but it is required 
    Intern();
    Intern(const Intern& other);
    Intern& operator=(const Intern& other);
    ~Intern();

    AForm* makeForm(const std::string& formName, const std::string& target);

  private:
    AForm* makePresidentialPardonForm(const std::string& target);
    AForm* makeRobotomyRequestForm(const std::string& target);
    AForm* makeShrubberyCreationForm(const std::string& target);
};

#endif