# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 15:31:26 by ajemraou          #+#    #+#              #
#    Updated: 2022/11/24 15:50:12 by ajemraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGE = -Wall -Wextra -Werror -std=c++98

SRC =	HarlFilter.cpp \
		main.cpp

OBJ = ${SRC:.cpp=.o}

NAME = HarlFilter

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