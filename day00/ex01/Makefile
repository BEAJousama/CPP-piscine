# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 15:30:16 by obeaj             #+#    #+#              #
#    Updated: 2022/06/23 14:17:16 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =  Contact.cpp \
		main.cpp \
		PhoneBook.cpp
		
OBJS  = ${addprefix ./,${SRCS:.cpp=.o}}
INCLUDE = Contact.hpp PhoneBook.hpp

%.o:%.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o $@

all : ${NAME}

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

re: fclean all