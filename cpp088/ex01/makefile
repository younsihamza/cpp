cc = c++

name = Span

flags = -Wall -Wextra -Werror -std=c++98

header = Span.hpp
file = main.cpp Span.cpp

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