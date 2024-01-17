cc = c++ 

NAME = PmergeMe
flag = -Wall -Werror -Wextra -std=c++98

files =  PmergeMe.cpp SortVector.cpp SortDeque.cpp main.cpp

ofiles = $(files:.cpp=.o)

header = PmergeMe.hpp SortVector.hpp SortDeque.hpp

all : $(NAME)

$(NAME) : $(ofiles)
	$(cc) $(flag) $^ -o $@

%.o : %.cpp $(header)
	$(cc) $(flag) $< -c  -o $@

clean:
	rm -f $(ofiles)

fclean : clean 
	rm -f $(NAME)

re : fclean all