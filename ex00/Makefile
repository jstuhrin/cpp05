NAME = ex00

CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98

SRCS = Bureaucrat.cpp \
			 main.cpp

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re