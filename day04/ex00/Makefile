# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 23:33:44 by obeaj             #+#    #+#              #
#    Updated: 2022/08/17 10:45:28 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals

CC= c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INCLUD = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

SRCS =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp $(INCLUD)
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CC_FLAGS) $(OBJS) -o $(NAME)


all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re