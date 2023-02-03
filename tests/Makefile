# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 19:26:54 by abenamar          #+#    #+#              #
#    Updated: 2023/02/03 01:01:47 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := test.out

LOAD := load.out

LIBFTPRINTF := $(CURDIR)/../libftprintf.a

INCLUDES := -I $(CURDIR)
INCLUDES += -I $(CURDIR)/..
INCLUDES += -I $(CURDIR)/../libft

LDFLAGS := -L$(CURDIR)/..
LDFLAGS += -L$(CURDIR)/../libft

LDLIBS := -lftprintf
LDLIBS += -lft

SRCS := read_next_line.c
SRCS += ft_printf_without_any_conversion_test.c

CC := cc

CFLAGS := -g3
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

ifneq (, $(findstring bonus, $(MAKECMDGOALS)))
CFLAGS += -DBONUS
endif

SRCS += test.c

LSRCS := ft_printf_without_any_conversion_load.c
LSRCS += load.c

RM := rm -f

OBJS := $(SRCS:.c=.o)

LOBJS := $(LSRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME): $(OBJS) $(LOAD)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES) -lbsd

$(LOAD): .libftprintf $(LOBJS)
	@$(CC) $(CFLAGS) -o $(LOAD) $(LOBJS) $(INCLUDES) $(LDFLAGS) $(LDLIBS)

.libftprintf:
	@echo "\033[0;36m##################################### make libftprintf #####################################\033[0m"
	@$(MAKE) -C $(CURDIR)/.. $(findstring bonus, $(MAKECMDGOALS))

test: $(NAME)
	@echo "\033[0;36m########################################### test ###########################################\033[0m"
	@./$(LOAD) | ./$(NAME)

valgrind-test: $(NAME) 
	@echo "\033[0;36m#################################### test with valgrind ####################################\033[0m"
	@./$(LOAD) | valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

norm:
	@echo "\033[0;36m######################################## norminette ########################################\033[0m"
	@cd $(CURDIR)/.. && norminette $$(ls | grep "\.c\|\.h")

bonus: $(NAME)

all: norm valgrind-test

clean:
	$(RM) $(OBJS)
	$(RM) $(LOBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LOAD)
	$(RM) $(LIBFTPRINTF)

re: fclean all

.PHONY: re fclean clean all bonus norm valgrind-test test
