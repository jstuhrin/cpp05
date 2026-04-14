
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
public:
  Bureaucrat();
  Bureaucrat(const std::string& name, int grade);
  Bureaucrat(const Bureaucrat& other);
  ~Bureaucrat();
  
  const std::string name;
  int grade;

  std::string getName() const;
  int getGrade() const;
  void incrementGrade();
  void decrementGrade();

  class GradeTooHighException : public std::exception
  {
  public:
    // GradeTooHighException(const std::string& message) : message(message) {};
    virtual const char* what() const throw()
    {
      return message.c_str();
    }
  private:
    std::string message = "grade is too high!";
  };

  class GradeTooLowException : public std::exception
  {
  public:
    // GradeTooLowException(const std::string& message) : message(message) {};
    virtual const char* what() const throw()
    {
      return message.c_str();
    }
  private:
    std::string message = "grade is too low!";
  };

private:
  Bureaucrat& operator=(const Bureaucrat& other); // declared private, not defined
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif