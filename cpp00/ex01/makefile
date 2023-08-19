cc = c++
NAME = phonebook
flags = -Wall -Wextra -Werror -std=c++98

files = main.cpp Phonebook.cpp Contact.cpp help.cpp

headers = Contact.hpp ex01.hpp Phonebook.hpp

ofile = $(files:.cpp=.o)

all: $(NAME)

$(NAME) : $(ofile)
	$(cc) $(flags)  $^ -o $@

%.o : %.cpp $(headers)
	$(cc) $(flags)  $< -c -o $@

clean :
	rm -f $(ofile)

fclean : clean
	rm -f $(NAME)

re : fclean all