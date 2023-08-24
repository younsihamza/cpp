cc = c++ 

NAME = materia
flag = -Wall -Werror -Wextra -std=c++98 

files = MateriaSource.cpp   Ice.cpp   Cure.cpp   Character.cpp  AMateria.cpp main.cpp 

ofiles = $(files:.cpp=.o)

header = MateriaSource.hpp IMateriaSource.hpp ICharacter.hpp Ice.hpp Cure.hpp Character.hpp AMateria.hpp

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




