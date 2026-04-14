
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

  class GradeException : public std::exception
  {
  public:
    GradeException(const std::string& message) : message(message) {};
    virtual const char* what() const throw()
    {
      return message.c_str();
    }
  private:
    std::string message;
  };

private:
  Bureaucrat& operator=(const Bureaucrat& other); // declared private, not defined
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif