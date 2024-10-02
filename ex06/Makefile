# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 15:12:01 by erigolon          #+#    #+#              #
#    Updated: 2024/10/02 12:50:34 by erigolon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= harlFilter

SRC		= main.cpp \
			Harl.cpp

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