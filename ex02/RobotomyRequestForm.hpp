#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
  public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();

    void execute(const Bureaucrat& bureaucrat) const;
  private:
    const std::string target;
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other); // declared private, and not implemented
};

#endif