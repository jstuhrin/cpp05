
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
    throw Bureaucrat::GradeException("grade is too high!");
  }
  if (grade > 150)
  {
    throw Bureaucrat::GradeException("grade is too low!");
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
  --grade;
  if (grade < 1)
  {
    throw Bureaucrat::GradeException("grade is too high!");
  }
}

void Bureaucrat::decrementGrade()
{
  ++grade;
  if (grade > 150)
  {
    throw Bureaucrat::GradeException("grade is too low!");
  }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
  os << "Bureaucrat name: " << bureaucrat.name << "\nBureaucrat grade: " << bureaucrat.grade << "\n";
  return os;
}