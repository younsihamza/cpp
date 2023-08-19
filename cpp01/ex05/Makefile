name = harl

cc = c++

flags = -Wall -Wextra -Werror  -std=c++98

files = main.cpp Harl.cpp

ofile = $(files:.cpp=.o)

header = Harl.hpp


all : $(name)

$(name) : $(ofile)
	$(cc) $(flags) $^ -o $@

%.o :%.cpp $(header)
	$(cc) $(flags) $< -c -o $@

clean : 
	rm -f $(ofile)

fclean : clean 
	rm -f $(name)

re : fclean all
 