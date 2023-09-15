cc = c++

name = array

flags = -Wall -Wextra -Werror -std=c++98

header = Array.hpp
file = main.cpp

ofile = $(file:.cpp=.o)

all : $(name)

$(name) : $(ofile)
	$(cc) $(flags) $^ -o $@

%.o : %.cpp $(header)
	$(cc) $(flags) $< -c -o $@

clean : 
	rm -f $(ofile)

fclean : clean 
	rm -f $(name)

re : fclean all