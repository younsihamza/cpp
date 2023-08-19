cc = c++ 

NAME = scavtrap
flag = -Wall -Werror -Wextra -std=c++98

files = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp

ofiles = $(files:.cpp=.o)

header = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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




