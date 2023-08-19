cc = c++

name = noViolence

flag = -Wall -Wextra -Werror -std=c++98

files = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

ofiles = $(files:.cpp=.o)
headers = HumanA.hpp HumanB.hpp Weapon.hpp

all: $(name)

$(name) : $(ofiles)
	$(cc) $(flag) $^ -o $@

%.o : %.cpp $(headers)
	$(cc) $(flag) $< -c -o $@

clean : 
	rm -f $(ofiles)

fclean : clean
	rm -f $(name)

re : fclean all 