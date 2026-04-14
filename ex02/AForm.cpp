#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
  : name("default")
  , isSigned(false)
  , requiredToSign(1)
  , requiredToExecute(1)
{}

AForm::AForm(std::string name, int requiredToSign, int requiredToExecute)
  : name(name)
  , isSigned(false)
  , requiredToSign(requiredToSign)
  , requiredToExecute(requiredToExecute)
{}

AForm::AForm(const AForm& other)
  : name(other.name)
  , isSigned(other.isSigned)
  , requiredToSign(other.requiredToSign)
  , requiredToExecute(other.requiredToExecute)
{}

AForm::~AForm() {}

std::string AForm::getName() const
{
  return name;
}

bool AForm::getIsSigned() const
{
  return isSigned;
}

int AForm::getRequiredToSign() const
{
  return requiredToSign;
}

int AForm::getRequiredToExecute() const
{
  return requiredToExecute;
}

void AForm::beSigned(const Bureaucrat& bureaucrat) throw(AForm::GradeTooLowException)
{
  if (bureaucrat.getGrade() > requiredToSign)
  {
    throw AForm::GradeTooLowException();
  }
  isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
  os << "AForm: name: " << form.getName() << "\nAForm: is signed: " << (form.getIsSigned() == true ? "true" : "false")
     << "\nAForm: grade required to sign: " << form.getRequiredToSign() << "\nAForm: required to execute: "
     << form.getRequiredToExecute() << "\n";
  return os;
}