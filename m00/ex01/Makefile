# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 11:16:41 by ajemraou          #+#    #+#              #
#    Updated: 2022/10/25 15:17:42 by ajemraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++-12

CFLAGE = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \
		Contact.cpp \
		PhoneBook.cpp

NAME = PhoneBook

all :
	@$(CC) $(CFLAGE) $(SRC) -o $(NAME)

clean :
	@rm -f $(NAME)

fclean : clean

re : fclean all
