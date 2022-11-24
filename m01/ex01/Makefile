# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 16:01:41 by ajemraou          #+#    #+#              #
#    Updated: 2022/11/24 16:55:20 by ajemraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGE = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

NAME = ZombieHorde

OBJ = ${SRC:.cpp=.o}

%.o : %.cpp
	@$(CC) $(CFLAGE) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGE) $(OBJ) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all