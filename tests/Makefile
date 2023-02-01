# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 19:26:54 by abenamar          #+#    #+#              #
#    Updated: 2023/02/01 23:30:50 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := test.out

LIBFTPRINTF := $(CURDIR)/../libftprintf.a

INCLUDES := -I $(CURDIR)
INCLUDES += -I $(CURDIR)/..
INCLUDES += -I $(CURDIR)/../libft

LDFLAGS := -L$(CURDIR)/..
LDFLAGS += -L$(CURDIR)/../libft

LDLIBS := -lftprintf
LDLIBS += -lft

SRCS := ft_printf_test.c

CC := cc

CFLAGS := -g3
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

ifneq (, $(findstring bonus, $(MAKECMDGOALS)))
CFLAGS += -DBONUS
endif

SRCS += test.c

RM := rm -f

OBJS := $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME): .libftprintf $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES) $(LDFLAGS) $(LDLIBS)

.libftprintf:
	@echo "\033[0;36m##################################### make libftprintf #####################################\033[0m"
	@$(MAKE) -C $(CURDIR)/.. $(findstring bonus, $(MAKECMDGOALS))

test: $(NAME)
	@echo "\033[0;36m########################################### test ###########################################\033[0m"
	@./$(NAME)

valgrind-test: $(NAME)
	@echo "\033[0;36m#################################### test with valgrind ####################################\033[0m"
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

norm:
	@echo "\033[0;36m######################################## norminette ########################################\033[0m"
	@cd $(CURDIR)/.. && norminette $$(ls | grep "\.c\|\.h")

bonus: $(NAME)

all: norm valgrind-test

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFTPRINTF)

re: fclean all

.PHONY: re fclean clean all bonus norm valgrind-test test
