# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 17:13:57 by ajemraou          #+#    #+#              #
#    Updated: 2023/01/21 12:15:53 by ajemraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++

CFLAGE = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		ClapTrap.cpp \
		FragTrap.cpp \
		ScavTrap.cpp \
		DiamondTrap.cpp

NAME = DiamondTrap

OBJ = ${SRC:.cpp=.o}

%.o : %.cpp
	$(CC) $(CFLAGE) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGE) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all