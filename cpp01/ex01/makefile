cc = c++

name = zombie

flag = -Wall -Wextra -Werror -std=c++98


file = main.cpp Zombie.cpp zombieHorde.cpp 

ofile = $(file:.cpp=.o)
header = Zombie.hpp

all : $(name)

$(name) : $(ofile)
	$(cc) $(flag) $^ -o $@

%.o:%.cpp $(header)
	$(cc) $(flag) $< -c  -o $@ 

clean : 
	rm -f $(ofile)

fclean : clean 
	rm -f $(name)
