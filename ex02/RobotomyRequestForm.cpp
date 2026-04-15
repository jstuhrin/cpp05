
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
  : AForm("RobotomyRequestForm", 72, 45)
  , target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
  : AForm("RobotomyRequestForm", 72, 45)
  , target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
  : AForm(other)
  , target(other.target)
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
  // todo: 50%
  std::cout << executor.getName() << " performed a robotomy on " << target << "\n"; 
}