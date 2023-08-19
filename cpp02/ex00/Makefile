cc = c++ 

NAME = fixed

flag = -Wall -Wextra -Werror -std=c++98

files = main.cpp Fixed.cpp

ofiles = $(files:.cpp=.o)

header = Fixed.hpp

all: $(NAME)

$(NAME) : $(ofiles)
	$(cc) $(flag) $^ -o $@

%.o:%.cpp $(header)
	$(cc) $(flag) $< -c -o $@

clean : 
	rm  -f $(ofiles)

fclean : clean 
	rm -f $(NAME)

re : fclean all
