# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 19:26:54 by abenamar          #+#    #+#              #
#    Updated: 2023/04/16 15:25:38 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := test.out

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
LSRCS += ft_printf_p_conversion_load.c
LSRCS += ft_printf_d_conversion_load.c
LSRCS += ft_printf_i_conversion_load.c
LSRCS += ft_printf_u_conversion_load.c
LSRCS += ft_printf_x_conversion_load.c
LSRCS += ft_printf_upperx_conversion_load.c
LSRCS += ft_printf_percent_conversion_load.c

CC := cc

CFLAGS := -g3
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
CFLAGS += -Wno-format

ifneq (, $(findstring bonus, $(MAKECMDGOALS)))
CFLAGS += -DBONUS

LSRCS += ft_printf_x_alternate_form_load.c
LSRCS += ft_printf_upperx_alternate_form_load.c
endif

SRCS := read_next_line.c
SRCS += $(LSRCS:_load.c=_test.c)
SRCS += test.c

RM := rm -f

OBJS := $(SRCS:.c=.o)

LOBJS := $(LSRCS:.c=.o)

LOUTS := $(LOBJS:.o=.out)

LOADS := $(LOUTS:%.out=./%.out;)

VLOADS := $(LOUTS:%.out=valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./%.out;)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

%.out: %.o
	@$(CC) $(CFLAGS) -o $@ $< $(INCLUDES) $(LDFLAGS) $(LDLIBS)

$(NAME): .libftprintf .reload $(OBJS) $(LOBJS) $(LOUTS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES) -lbsd

.libftprintf:
	@echo "\033[0;36m##################################### make libftprintf #####################################\033[0m"
	@$(MAKE) -C $(CURDIR)/.. $(findstring bonus, $(MAKECMDGOALS))

.reload:
	@echo "\033[0;36m################################## (re)load tests entries ##################################\033[0m"
	@$(RM) $(LOBJS)
	@$(RM) $(LOUTS)

test: $(NAME)
	@echo "\033[0;36m########################################### test ###########################################\033[0m"
	@($(LOADS)) | ./$(NAME)

valgrind-test: $(NAME) 
	@echo "\033[0;36m#################################### test with valgrind ####################################\033[0m"
	@($(VLOADS)) | valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

norm:
	@echo "\033[0;36m######################################## norminette ########################################\033[0m"
	@cd $(CURDIR)/.. && norminette $$(ls | grep "\.c\|\.h") && norminette $$(ls -d */ | grep -v 'libft/' | grep -v 'tests/')

community-tests:
	@if [ ! -d "printfTester" ] || [ -z "$$(ls -A printfTester)" ]; then \
		git submodule update --init printfTester; \
		echo "#ifndef FT_PRINTF_H\n# define FT_PRINTF_H\n\nint	ft_printf(const char *format, ...);\n\n#endif" > printfTester/ft_printf.h; \
		sed -i 's/\(\.\.\)/\1\/\1/g' printfTester/Makefile; \
		sed -i 's/\(-I utils\/\) -I\.\.\/\.\./\1 -I. -I..\/..\/libft/' printfTester/Makefile; \
		sed -i 's/\(-lftprintf\)/\1 -L..\/..\/libft -lft/' printfTester/Makefile; \
		sed -i 's/: update/:/g' printfTester/Makefile; \
	fi
	@echo "\033[0;36m################################# Tripouille : printfTester ################################\033[0m"
	@$(MAKE) -C printfTester/

bonus: $(NAME)

all: norm valgrind-test community-tests

clean:
	$(RM) $(OBJS)
	$(RM) $(LOBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LOUTS)
	$(RM) $(LIBFTPRINTF)

re: fclean all

.PHONY: re fclean clean all bonus norm valgrind-test test
