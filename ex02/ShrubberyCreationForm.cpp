
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
  : AForm("ShrubberyCreationForm", 145, 137)
  , target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
  : AForm("ShrubberyCreationForm", 145, 137)
  , target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
  : AForm(other)
  , target(other.target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
  std::cout << executor.getName() << " excuted form " << name << "\n";
  //  todo: create file and write to file
  std::cout << "\n"
               "        tr\n"
               "       tree\n"
               "      treeee\n"
               "     treeeeee\n"
               "    treeeeeeee\n"
               "   treeeeeeeeee\n"
               "  treeeeeeeeeeee\n"
               " treeeeeeeeeeeeee\n"
               "treeeeeeeeeeeeeeee\n"
               "       tree\n"
               "       tree\n"
               "       tree\n\n";
}