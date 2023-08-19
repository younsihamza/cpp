# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 14:53:08 by hyounsi           #+#    #+#              #
#    Updated: 2023/08/17 14:53:08 by hyounsi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = c++ 

NAME = tringleCheckPoint

flag = -Wall -Wextra -Werror -std=c++98

files = main.cpp Fixed.cpp Point.cpp bsp.cpp

ofiles = $(files:.cpp=.o)

header = Fixed.hpp  Point.hpp

all: $(NAME)

$(NAME) : $(ofiles)
	$(cc) $(flag) $^ -o $@

%.o:%.cpp $(header)
	$(cc) $(flag) $< -c -o $@

clean : 
	rm  -f $(ofiles)

fclean : clean 
	rm -f $(NAME)

re : fclean all
