# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 21:33:08 by ajemraou          #+#    #+#              #
#    Updated: 2022/11/05 11:22:59 by ajemraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++

CFLAGE = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		Zombie.cpp

NAME = Zombie

all :
	@$(CC) $(CFLAGE) $(SRC) -o $(NAME)

clean :
	@rm -f $(NAME)

fclean : clean

re : fclean all