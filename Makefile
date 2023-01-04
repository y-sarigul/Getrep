# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 10:02:09 by msarigul          #+#    #+#              #
#    Updated: 2022/08/02 10:11:50 by msarigul         ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

NAME			:= tui.a 

OBJDIR		:= obj
SRC 			:= $(OBJEDIR)/src.a
CC				:= cc
CFLAGS		:= -Wall -Wextra -Werror -I ./inc -lcurses

$(NAME): $(OBJDIR) $(SRC)
	@ar -rcs $(NAME) $(OBJDIR)/*.o 
	@gcc main.c tui.a -o tui -I ./inc -lcurses
	@./tui

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(SRC):
	@echo "Src creating"
	@make -C src 

all: $(NAME)

clean:
	@rm -f $(OBJDIR)/*.o

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJDIR)
	@rm tui

re: fclean all

m:
	@gcc main.c tui.a -o tui -I ./inc -lcurses
	@./tui
	@rm tui

.PHONY: all re clean fclean m
