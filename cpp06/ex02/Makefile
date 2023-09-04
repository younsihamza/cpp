cc = c++ 

NAME = Bureaucrat
flag = -Wall -Werror -Wextra -std=c++98

files = help.cpp main.cpp Base.cpp 
ofiles = $(files:.cpp=.o)

header = Base.hpp C.hpp A.hpp B.hpp 

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