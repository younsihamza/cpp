cc = c++
name = sed

flag = -Wall -Wextra -Werror -std=c++98

file = main.cpp filework.cpp

ofile  = $(file:.cpp=.o)

header = filework.hpp

all : $(name)

$(name) : $(ofile)
	$(cc) $(flag) $^ -o $@

%.o : %.cpp $(header)
	$(cc) $(flag) $< -c -o $@

clean : 
	rm -f $(ofile)

fclean : clean 
	rm -f $(name)

re : fclean all