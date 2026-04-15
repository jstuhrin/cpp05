
#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class AForm
{
  public:
    class GradeTooLowException : public std::exception
    {
      public:
        virtual const char* what() const throw()
        {
          return "grade is too low!";
        }
    };

    class GradeTooHighException : public std::exception
    {
      public:
        virtual const char* what() const throw()
        {
          return "grade is too high!";
        }
    };

    AForm();
    AForm(std::string name, int requiredToSign, int requiredToExecute);
    AForm(const AForm& other);
    virtual ~AForm();

    std::string getName() const;
    bool getIsSigned() const;
    int getRequiredToSign() const;
    int getRequiredToExecute() const;

    void beSigned(const Bureaucrat& bureaucrat) throw(AForm::GradeTooLowException);
    virtual void execute(const Bureaucrat& executor) const = 0;

  protected:
    const std::string name;
    bool isSigned;
    const int requiredToSign;
    const int requiredToExecute;

  private:
    AForm& operator=(const AForm& other); // defined privately, and not implemented
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif