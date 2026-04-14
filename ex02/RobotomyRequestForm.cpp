
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
  : AForm("RobotomyRequestForm", 72, 45)
  , target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string name, int requiredToSign, int requiredToExecute)
  : AForm("RobotomyRequestForm", 72, 45)
  , target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
  : AForm(other)
  , target(other.target)
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor)
{
  // todo: check if is signed
  if (executor.getGrade() > requiredToExecute)
  {
    throw AForm::GradeTooLowException();
  }
  // todo: 50%
  std::cout << executor.getName() << " performed a robotomy on " << target << "\n"; 
}