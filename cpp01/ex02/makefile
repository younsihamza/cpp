cc = c++

name = brian

flag = -Wall -Wextra -Werror -std=c++98


file = main.cpp 

ofile = $(file:.cpp=.o)

all : $(name)

$(name) : $(ofile)
	$(cc) $(flag) $^ -o $@

%.o:%.cpp 
	$(cc) $(flag) $< -c  -o $@ 

clean : 
	rm -f $(ofile)

fclean : clean 
	rm -f $(name)
