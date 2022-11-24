# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 15:10:42 by ajemraou          #+#    #+#              #
#    Updated: 2022/11/22 15:14:46 by ajemraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGE = -Wall -Wextra -Werror -std=c++98

SRC =	Harl.cpp \
		main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = Harl

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