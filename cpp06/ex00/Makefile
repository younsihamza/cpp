cc = c++ 

NAME = Bureaucrat
flag = -Wall -Werror -Wextra -std=c++98

files = ScalarConverter.cpp main.cpp
ofiles = $(files:.cpp=.o)

header = ScalarConverter.hpp

all : $(NAME)

$(NAME) : $(ofiles)
	$(cc) $(flag) $^ -o $@

%.o : %.cpp $(header)
	$(cc) $(flag) $< -c  -o $@

clean:
	rm -f $(ofiles)

fclean : clean
	rm -f $(NAME)

re : fclean re