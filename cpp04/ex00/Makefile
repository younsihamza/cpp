cc = c++ 

NAME = Animal
flag = -Wall -Werror -Wextra -std=c++98

files = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp

ofiles = $(files:.cpp=.o)

header = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

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




