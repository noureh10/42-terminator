# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/21 18:14:40 by nechaara          #+#    #+#              #
#    Updated: 2024/07/21 18:39:37 by nechaara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = termintor

OBJ_DIR = objects
SRCS = 	src/minitalk_tester/MinitalkChecker.cpp \
		src/null_check_tester/NullChecker.cpp \
		src/push_swap_tester/PushSwapChecker.cpp \
		src/main.cpp
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))
FLAGS = -std=c++11

all : $(NAME)

$(NAME) : $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "terminator ready for action"
	@echo "use it this way : ./termintaor "
	

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)/src/minitalk_tester
	@mkdir -p $(OBJ_DIR)/src/null_check_tester
	@mkdir -p $(OBJ_DIR)/src/push_swap_tester
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Cleaned object files."

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned executable."

re: fclean all

.PHONY: all clean fclean re