# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arodgers <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 13:11:41 by arodgers          #+#    #+#              #
#    Updated: 2024/09/14 18:51:33 by arodgers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -Wshadow

NAME = fixedPoint

HDR = Fixed.hpp

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

COLOR = \033[0m
COLOR_GREEN = \033[0;32m
COLOR_RED = \033[0;31m
COLOR_YELLOW = \033[0;33m
COLOR_CYAN = \033[0;36m

all: $(NAME)

%.o : %.cpp
	$(C++) $(FLAGS) $< -o $@ -c

$(NAME): $(OBJS) $(HDR)
	@echo "$(COLOR_CYAN)Linking object files...$(COLOR_RESET)"
	$(C++) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(COLOR_GREEN)Compilation successful.$(COLOR_RESET)"

clean:
	@echo "$(COLOR_CYAN)Removing object files...$(COLOR_RESET)"
	$(RM) $(OBJS)
	@echo "$(COLOR_GREEN)Objects files removed successfully.$(COLOR_RESET)"

fclean: clean
	@echo "$(COLOR_CYAN)Removing executable...$(COLOR_RESET)"
	$(RM) $(NAME)
	@echo "$(COLOR_GREEN)Executable removed successfully.$(COLOR_RESET)"

re: fclean all
