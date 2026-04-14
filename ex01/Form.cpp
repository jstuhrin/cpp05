#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
  : name("default")
  , isSigned(false)
  , requiredToSign(1)
  , requiredToExecute(1)
{}

Form::Form(const std::string& name, const int requiredToSign, const int requiredToExecute)
  : name(name)
  , isSigned(false)
  , requiredToSign(requiredToSign)
  , requiredToExecute(requiredToExecute)
{
  if (requiredToSign < 1 || requiredToExecute < 1)
  {
    throw Form::GradeTooHighException();
  }
  if (requiredToSign > 150 || requiredToExecute > 150)
  {
    throw Form::GradeTooLowException();
  }
}

Form::Form(const Form& other)
  : name(other.name)
  , isSigned(other.isSigned)
  , requiredToSign(other.requiredToSign)
  , requiredToExecute(other.requiredToExecute)
{}

Form::~Form() {}

std::string Form::getName() const
{
  return name;
}

bool Form::getIsSigned() const
{
  return isSigned;
}

int Form::getRequiredToSign() const
{
  return requiredToSign;
}

int Form::getRequiredToExecute() const
{
  return requiredToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat) throw(Form::GradeTooLowException)
{
  if (bureaucrat.grade > requiredToSign)
  {
    throw Form::GradeTooLowException();
  }
  isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
  os << "Form: name: " << form.getName() << "\nForm: is signed: " << (form.getIsSigned() == true ? "true" : "false")
     << "\nForm: grade required to sign: " << form.getRequiredToSign() << "\nForm: required to execute: "
     << form.getRequiredToExecute() << "\n";
  return os;
}