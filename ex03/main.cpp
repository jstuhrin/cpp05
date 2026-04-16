
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
    if (rrf != NULL)
    {
      arthur.signForm(*rrf);
      arthur.executeForm(*rrf);
      delete rrf;
    }
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
      delete ppf;
    }
  }
  {
    Intern someRandomIntern;
    AForm* scf;
    scf = someRandomIntern.makeForm("shrubbery creation form", "marine terrein");
    Bureaucrat arthur("arthur", 1);
    if (scf != NULL)
    {
      arthur.signForm(*scf);
      arthur.executeForm(*scf);
      delete scf;
    }
  }
  {
    Intern someRandomIntern;
    AForm* noForm;
    noForm = someRandomIntern.makeForm("noForm", "Bender");
    Bureaucrat arthur("arthur", 1);
    if (noForm != NULL)
    {
      arthur.signForm(*noForm);
      arthur.executeForm(*noForm);
      delete noForm;
    }
  }
  return 0;
}