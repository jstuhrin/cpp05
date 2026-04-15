
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
public:
  class GradeTooHighException : public std::exception
  {
  public:
    const char* what() const throw()
    {
      return "grade is too high!";
    }
  };

  class GradeTooLowException : public std::exception
  {
  public:
    const char* what() const throw()
    {
      return "grade is too low!";
    }
  };

  Bureaucrat();
  Bureaucrat(const std::string& name, int grade);
  Bureaucrat(const Bureaucrat& other);
  ~Bureaucrat();

  std::string getName() const;
  int getGrade() const;
  void incrementGrade();
  void decrementGrade();

  void signForm(Form& form) const;

private:
  const std::string name;
  int grade;

  Bureaucrat& operator=(const Bureaucrat& other); // declared private, not defined
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif