
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
  : AForm("PresidentialPardonForm", 25, 5)
  , target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
  : AForm("PresidentialPardonForm", 25, 5)
  , target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
  : AForm(other)
  , target(other.target)
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
  // todo: check if is signed
  if (executor.getGrade() > requiredToExecute)
  {
    throw AForm::GradeTooLowException();
  }
  std::cout << "Galactic news! " << target << " has been pardoned by Zaphod Beeblebrox!\n";
}