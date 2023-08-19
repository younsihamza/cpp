CC = c++

NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

files = megaphone.cpp

OFILE = $(files:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILE)
	$(CC) $(FLAGS) $^ -o  $@

%.o: %.cpp
	$(CC) $(FLAGS) $< -c -o $@

clean :
	rm -f $(OFILE)

fclean : clean
	rm -f $(NAME)

re : fclean all
