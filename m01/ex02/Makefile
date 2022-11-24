# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 21:22:02 by ajemraou          #+#    #+#              #
#    Updated: 2022/11/21 21:25:27 by ajemraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGE = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = BRAIN

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