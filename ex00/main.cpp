
#include "Bureaucrat.hpp"

int main()
{
  try
  {
    Bureaucrat one("one", 42);
    std::cout << one;
  }
  catch (const Bureaucrat::GradeException& e)
  {
    std::cerr << "caught exception: " << e.what() << "\n";
  }

  try
  {
    Bureaucrat two("two", 1);
    std::cout << two;
  }
  catch (const Bureaucrat::GradeException& e)
  {
    std::cerr << "caught exception: " << e.what() << "\n";
  }

  try
  {
    Bureaucrat three("three", 150);
    std::cout << three;
  }
  catch (const Bureaucrat::GradeException& e)
  {
    std::cerr << "caught exception: " << e.what() << "\n";
  }

  try
  {
    Bureaucrat four("four", 0);
    std::cout << four;
  }
  catch (const Bureaucrat::GradeException& e)
  {
    std::cerr << "caught exception: " << e.what() << "\n";
  }

  try
  {
    Bureaucrat five("five", 151);
    std::cout << five;
  }
  catch (const Bureaucrat::GradeException& e)
  {
    std::cerr << "caught exception: " << e.what() << "\n";
  }
  return 0;
}