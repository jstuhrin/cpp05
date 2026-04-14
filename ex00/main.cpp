
#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat one("one", 42);
  std::cout << one;

  try
  {
    Bureaucrat two("two", -1);
    std::cout << two;
  }
  catch (const Bureaucrat::GradeTooHighException)
  {
    std::cout << "caught exception\n";
  }

  try
  {
    Bureaucrat three("three", 167);
    std::cout << three;
  }
  catch (const Bureaucrat::GradeTooLowException)
  {
    std::cout << "caught exception\n";
  }
  return 0;
}