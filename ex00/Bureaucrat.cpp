
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
  : name("this class should probably not have a default constructor")
  , grade(42)
{}

Bureaucrat::Bureaucrat(const std::string& name, int grade)
  : name(name)
  , grade(grade)
{
  if (grade < 1)
  {
    throw Bureaucrat::GradeTooHighException();
  }
  if (grade > 150)
  {
    throw Bureaucrat::GradeTooLowException();
  }
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
  : name(other.name)
  , grade(other.grade)
{}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
  return name;
}

int Bureaucrat::getGrade() const
{
  return grade;
}

void Bureaucrat::incrementGrade()
{
  if (grade <= 1)
  {
    throw Bureaucrat::GradeTooHighException();
  }
  --grade;
}

void Bureaucrat::decrementGrade()
{
  if (grade >= 150)
  {
    throw Bureaucrat::GradeTooLowException();
  }
  ++grade;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
  os << "Bureaucrat name: " << bureaucrat.getName() << "\nBureaucrat grade: " << bureaucrat.getGrade() << "\n";
  return os;
}