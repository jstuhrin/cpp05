
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
  {
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    Bureaucrat arthur("arthur", 1);
    arthur.signForm(*rrf);
    arthur.executeForm(*rrf);
  }
  {
    Intern someRandomIntern;
    AForm* ppf;
    ppf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
    Bureaucrat arthur("arthur", 1);
    if (ppf != NULL)
    {
      arthur.signForm(*ppf);
      arthur.executeForm(*ppf);
    }
  }
  return 0;
}