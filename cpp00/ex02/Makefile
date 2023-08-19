cc = c++

name = Account

flags = -Wall -Wextra -Werror -std=c++98

files = Account.cpp tests.cpp

ofiles = $(files:.cpp=.o)

header = Account.hpp

all:$(name)

$(name): $(ofiles)
	$(cc) $(flags) $^ -o $@

%.o:%.cpp $(header)
	$(cc) $(flags) $< -c -o $@

clean :
	rm -f $(ofiles)

fclean : clean
	rm -f $(name)

re: fclean all
