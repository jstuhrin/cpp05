
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
  public:
    Form();
    Form(const std::string&, const int, const int);
    Form(const Form& other);
    ~Form();

    std::string getName() const;
    bool getIsSigned() const;
    int getRequiredToSign() const;
    int getRequiredToExecute() const;
    void beSigned(const Bureaucrat& bureaucrat) throw(Form::GradeTooLowException);

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

private:
  const std::string name;
  bool isSigned;
  const int requiredToSign;
  const int requiredToExecute;

  Form& operator=(const Form& other); // defined privately, and not implemented
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif