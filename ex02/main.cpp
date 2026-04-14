
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
  {
    Bureaucrat arthur("arthur", 42);
    std::cout << arthur;
    ShrubberyCreationForm shrubberyCreationForm("home");
    arthur.signForm(shrubberyCreationForm);
    arthur.executeForm(shrubberyCreationForm);
  }
  return 0;
}