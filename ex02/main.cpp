
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
  {
    Bureaucrat arthur("arthur", 1);
    std::cout << arthur;
    PresidentialPardonForm presidentialPardonForm("jan");
    arthur.signForm(presidentialPardonForm);
    arthur.executeForm(presidentialPardonForm);
  }
  {
    Bureaucrat arthur("arthur", 150);
    std::cout << arthur;
    PresidentialPardonForm presidentialPardonForm("jan");
    arthur.signForm(presidentialPardonForm);
    arthur.executeForm(presidentialPardonForm);
  }
  {
    Bureaucrat arthur("arthur", 1);
    std::cout << arthur;
    RobotomyRequestForm robotomyRequestForm("jan");
    arthur.signForm(robotomyRequestForm);
    arthur.executeForm(robotomyRequestForm);
  }
  {
    Bureaucrat arthur("arthur", 150);
    std::cout << arthur;
    RobotomyRequestForm robotomyRequestForm("jan");
    arthur.signForm(robotomyRequestForm);
    arthur.executeForm(robotomyRequestForm);
  }
  {
    Bureaucrat arthur("arthur", 42);
    std::cout << arthur;
    ShrubberyCreationForm shrubberyCreationForm("home");
    arthur.signForm(shrubberyCreationForm);
    arthur.executeForm(shrubberyCreationForm);
  }
  {
    Bureaucrat arthur("arthur", 150);
    std::cout << arthur;
    ShrubberyCreationForm shrubberyCreationForm("home");
    arthur.signForm(shrubberyCreationForm);
    arthur.executeForm(shrubberyCreationForm);
  }
  return 0;
}