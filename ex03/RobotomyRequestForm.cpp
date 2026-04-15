
#include <cstdlib>
#include <ctime>

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
  : AForm("RobotomyRequestForm", 72, 45)
  , target("default")
{
  std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
  : AForm("RobotomyRequestForm", 72, 45)
  , target(target)
{
  std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
  : AForm(other)
  , target(other.target)
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
  if (std::rand() % 2 == 0)
  {
    std::cout << executor.getName() << " performed a successful robotomy on " << target << "\n"; 
  }
  else
  {
    std::cout << executor.getName() << " performed a failed robotomy on " << target << "\n";
  }
}