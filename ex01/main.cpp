
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
  {
    try
    {
      Form form0("form0", 0, 42);
    }
    catch (const Form::GradeTooHighException& e)
    {
      std::cerr << e.what() << "\n";
    }
    try
    {
      Form form1("form1", 151, 42);
    }
    catch (const Form::GradeTooLowException& e)
    {
      std::cerr << e.what() << "\n";
    }
    try
    {
      Form form2("form2", 42, 0);
    }
    catch (const Form::GradeTooHighException& e)
    {
      std::cerr << e.what() << "\n";
    }
    try
    {
      Form form3("form3", 42, 151);
    }
    catch (const Form::GradeTooLowException& e)
    {
      std::cerr << e.what() << "\n";
    }   
  }
  {
    Bureaucrat arthur("arthur", 42);
    std::cout << arthur;
    Form form("form", 41, 42);
    arthur.signForm(form);
    arthur.incrementGrade();
    arthur.signForm(form);
  }
  return 0;
}