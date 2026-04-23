NAME = ex01

CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98

SRCS = Bureaucrat.cpp \
       Form.cpp \
       main.cpp

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $^ -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re