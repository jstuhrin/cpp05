NAME = ex02

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = AForm.cpp \
			 Bureaucrat.cpp \
			 main.cpp \
			 PresidentialPardonForm.cpp \
			 RobotomyRequestForm.cpp \
			 ShrubberyCreationForm.cpp

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re