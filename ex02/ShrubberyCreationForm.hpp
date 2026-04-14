#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
  public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();

    void execute(const Bureaucrat& bureaucrat) const;
  private:
    const std::string target;
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other); // defined privately, and not implemented
};

#endif