# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vesingh <vesingh@student.wethinkcode.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/14 10:00:25 by vesingh           #+#    #+#              #
#    Updated: 2020/04/14 10:00:25 by vesingh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of program
NAME = test_zombie

# Sources & objects
SRC = Zombie.cpp ZombieEvent.cpp
OBJ = $(SRC:.cpp=.o)

# Compilation flags
CXX = g++
FLAGS = -Wall -Werror -Wextra

# Compile & create everything
all: $(NAME)

# Compile the program with objects
$(NAME):	$(OBJ)
			$(CXX) $(OBJ) -o $(NAME)

# This won't run if the source files don't exist or are not modified
# This creates the objects *i think
# %.o: %.cpp
$(OBJ):
		$(CXX) $(FLAGS) -c $(SRC)

# Rule to remove all the object files
clean:
		@rm -f $(OBJ)
		@echo "[INFO] Objects removed!"

# Rule to remove everything that has been created by the makefile
fclean: clean
		@rm -f $(NAME)
		@echo "[INFO] $(NAME) removed!"

# Rule to re-make everything
re: fclean all

# Makes sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: all clean fclean format re
