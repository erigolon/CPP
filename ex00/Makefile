# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erigolon <erigolon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 11:03:11 by erigolon          #+#    #+#              #
#    Updated: 2024/09/27 15:55:20 by erigolon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie

SRC		= main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp

OBJ		= $(SRC:.cpp=.o)

CXX		= c++ -g

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re