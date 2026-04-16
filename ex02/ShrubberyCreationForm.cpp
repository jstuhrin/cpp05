
#include <fstream>

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
  std::string fileName = target + "_shrubbery";
  std::ofstream file(fileName.c_str());
  if (!file.is_open())
  {
    std::cerr << "could not open file " << fileName << "\n";
    return;
  }
  file << "        tr\n"
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
          "       tree";
}