# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 13:21:40 by ajemraou          #+#    #+#              #
#    Updated: 2023/01/29 19:49:58 by ajemraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGE = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp

NAME = Bureaucrat

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