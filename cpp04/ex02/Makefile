cc = c++ 

NAME = Animal
flag = -Wall -Werror -Wextra -std=c++98

files = Animal.cpp Cat.cpp Dog.cpp main.cpp  Brain.cpp

ofiles = $(files:.cpp=.o)

header = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

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




