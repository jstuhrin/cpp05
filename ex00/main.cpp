
#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat one("one", 42);
  std::cout << one;

  one.incrementGrade();
  std::cout << one;

  one.decrementGrade();
  one.decrementGrade();
  std::cout << one; 

  Bureaucrat two("two", 1);
  std::cout << two;
  try
  {
    two.incrementGrade();
  }
  catch (const Bureaucrat::GradeTooHighException& e)
  {
    std::cerr << e.what() << "\n";
  }
  std::cout << two;

  Bureaucrat three("three", 150);
  std::cout << three;
  try
  {
    three.decrementGrade();
  }
  catch (const Bureaucrat::GradeTooLowException& e)
  {
    std::cerr << e.what() << "\n";
  }
  std::cout << three;

  try
  {
    Bureaucrat four("four", 0);
    std::cout << four;
  }
  catch (const Bureaucrat::GradeTooHighException& e)
  {
    std::cerr << e.what() << "\n";
  }

  try
  {
    Bureaucrat five("five", 151);
    std::cout << five;
  }
  catch (const Bureaucrat::GradeTooLowException& e)
  {
    std::cerr << e.what() << "\n";
  }

  return 0;
}