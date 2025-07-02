# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 16:41:08 by hfilipe-          #+#    #+#              #
#    Updated: 2025/05/15 12:16:54 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -ggdb
STD98 = -std=c++98
CXX = c++
OBJ_DIR = obj
SRC = main.cpp
OBJS = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRC))
NAME = SedIsForLosers

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(STD98) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(FLAGS) $(STD98) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all