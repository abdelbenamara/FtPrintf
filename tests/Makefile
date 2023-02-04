# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 19:26:54 by abenamar          #+#    #+#              #
#    Updated: 2023/02/04 23:30:21 by abenamar         ###   ########.fr        #
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

LSRCS := ft_printf_no_conversion_load.c
LSRCS += ft_printf_c_conversion_load.c
LSRCS += ft_printf_s_conversion_load.c
LSRCS += ft_printf_d_conversion_load.c
LSRCS += ft_printf_i_conversion_load.c
LSRCS += ft_printf_u_conversion_load.c
LSRCS += ft_printf_percent_conversion_load.c

SRCS := read_next_line.c
SRCS += $(LSRCS:_load.c=_test.c)

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

LOBJS := $(LSRCS:.c=.o)

LOUTS := $(LOBJS:.o=.out)

LOADS := $(LOUTS:%.out=./%.out;)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

%.out: %.o
	@$(CC) $(CFLAGS) -o $@ $< $(INCLUDES) $(LDFLAGS) $(LDLIBS)

$(NAME): $(LIBFTPRINTF) $(OBJS) $(LOUTS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES) -lbsd

$(LIBFTPRINTF):
	@echo "\033[0;36m##################################### make libftprintf #####################################\033[0m"
	@$(MAKE) -C $(CURDIR)/.. $(findstring bonus, $(MAKECMDGOALS))
	@$(RM) $(LOUTS)

test: $(NAME)
	@echo "\033[0;36m########################################### test ###########################################\033[0m"
	@($(LOADS)) | ./$(NAME)

valgrind-test: $(NAME) 
	@echo "\033[0;36m#################################### test with valgrind ####################################\033[0m"
	@($(LOADS)) | valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

norm:
	@echo "\033[0;36m######################################## norminette ########################################\033[0m"
	@cd $(CURDIR)/.. && norminette $$(ls | grep "\.c\|\.h") && norminette $$(ls -d */ | grep -v 'libft/' | grep -v 'tests/')

bonus: $(NAME)

all: norm valgrind-test

clean:
	$(RM) $(OBJS)
	$(RM) $(LOBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LOUTS)
	$(RM) $(LIBFTPRINTF)

re: fclean all

.PHONY: re fclean clean all bonus norm valgrind-test test
