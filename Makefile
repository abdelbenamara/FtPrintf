# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 19:26:54 by abenamar          #+#    #+#              #
#    Updated: 2023/05/03 02:07:32 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := test.out

INCLUDES := -I $(CURDIR)

LDFLAGS := -L$(CURDIR)/..

LDLIBS := -lftprintf

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

PAULO_RULE := fclean nosan run

TRIPOUILLE_RULE := m

ifneq (, $(findstring bonus, $(MAKECMDGOALS)))
CFLAGS += -DBONUS

LSRCS += ft_printf_x_alternate_form_load.c
LSRCS += ft_printf_upperx_alternate_form_load.c
LSRCS += ft_printf_d_blank_load.c
LSRCS += ft_printf_i_blank_load.c
LSRCS += ft_printf_d_sign_load.c
LSRCS += ft_printf_i_sign_load.c
LSRCS += ft_printf_d_sign_blank_load.c
LSRCS += ft_printf_i_sign_blank_load.c
LSRCS += ft_printf_d_blank_sign_load.c
LSRCS += ft_printf_i_blank_sign_load.c
LSRCS += ft_printf_c_min_width_load.c
LSRCS += ft_printf_s_min_width_load.c
LSRCS += ft_printf_p_min_width_load.c
LSRCS += ft_printf_d_min_width_load.c
LSRCS += ft_printf_i_min_width_load.c
LSRCS += ft_printf_u_min_width_load.c
LSRCS += ft_printf_x_min_width_load.c
LSRCS += ft_printf_upperx_min_width_load.c
LSRCS += ft_printf_x_alternate_form_min_width_load.c
LSRCS += ft_printf_upperx_alternate_form_min_width_load.c
LSRCS += ft_printf_d_blank_min_width_load.c
LSRCS += ft_printf_i_blank_min_width_load.c
LSRCS += ft_printf_d_sign_min_width_load.c
LSRCS += ft_printf_i_sign_min_width_load.c
LSRCS += ft_printf_c_minus_load.c
LSRCS += ft_printf_s_minus_load.c
LSRCS += ft_printf_p_minus_load.c
LSRCS += ft_printf_d_minus_load.c
LSRCS += ft_printf_i_minus_load.c
LSRCS += ft_printf_u_minus_load.c
LSRCS += ft_printf_x_minus_load.c
LSRCS += ft_printf_upperx_minus_load.c
LSRCS += ft_printf_x_minus_alternate_form_load.c
LSRCS += ft_printf_upperx_minus_alternate_form_load.c
LSRCS += ft_printf_d_minus_blank_load.c
LSRCS += ft_printf_i_minus_blank_load.c
LSRCS += ft_printf_d_minus_sign_load.c
LSRCS += ft_printf_i_minus_sign_load.c
LSRCS += ft_printf_d_zero_load.c
LSRCS += ft_printf_i_zero_load.c
LSRCS += ft_printf_u_zero_load.c
LSRCS += ft_printf_x_zero_load.c
LSRCS += ft_printf_upperx_zero_load.c
LSRCS += ft_printf_d_zero_minus_load.c
LSRCS += ft_printf_i_zero_minus_load.c
LSRCS += ft_printf_u_zero_minus_load.c
LSRCS += ft_printf_x_zero_minus_load.c
LSRCS += ft_printf_upperx_zero_minus_load.c
LSRCS += ft_printf_d_minus_zero_load.c
LSRCS += ft_printf_i_minus_zero_load.c
LSRCS += ft_printf_u_minus_zero_load.c
LSRCS += ft_printf_x_minus_zero_load.c
LSRCS += ft_printf_upperx_minus_zero_load.c
LSRCS += ft_printf_x_zero_alternate_form_load.c
LSRCS += ft_printf_upperx_zero_alternate_form_load.c
LSRCS += ft_printf_d_zero_blank_load.c
LSRCS += ft_printf_i_zero_blank_load.c
LSRCS += ft_printf_d_zero_sign_load.c
LSRCS += ft_printf_i_zero_sign_load.c
LSRCS += ft_printf_s_precision_load.c
LSRCS += ft_printf_d_precision_load.c
LSRCS += ft_printf_i_precision_load.c
LSRCS += ft_printf_u_precision_load.c
LSRCS += ft_printf_x_precision_load.c
LSRCS += ft_printf_upperx_precision_load.c
LSRCS += ft_printf_x_alternate_form_precision_load.c
LSRCS += ft_printf_upperx_alternate_form_precision_load.c
LSRCS += ft_printf_d_blank_precision_load.c
LSRCS += ft_printf_i_blank_precision_load.c
LSRCS += ft_printf_d_sign_precision_load.c
LSRCS += ft_printf_i_sign_precision_load.c
LSRCS += ft_printf_s_min_width_precision_load.c
LSRCS += ft_printf_d_min_width_precision_load.c
LSRCS += ft_printf_i_min_width_precision_load.c
LSRCS += ft_printf_u_min_width_precision_load.c
LSRCS += ft_printf_x_min_width_precision_load.c
LSRCS += ft_printf_upperx_min_width_precision_load.c
LSRCS += ft_printf_s_minus_precision_load.c
LSRCS += ft_printf_d_minus_precision_load.c
LSRCS += ft_printf_i_minus_precision_load.c
LSRCS += ft_printf_u_minus_precision_load.c
LSRCS += ft_printf_x_minus_precision_load.c
LSRCS += ft_printf_upperx_minus_precision_load.c
LSRCS += ft_printf_d_zero_precision_load.c
LSRCS += ft_printf_i_zero_precision_load.c
LSRCS += ft_printf_u_zero_precision_load.c
LSRCS += ft_printf_x_zero_precision_load.c
LSRCS += ft_printf_upperx_zero_precision_load.c

PAULO_RULE := fclean bonusnosan run

TRIPOUILLE_RULE := a
endif

SRCS := read_next_line.c
SRCS += test.c

RM := rm -f

OBJS := $(SRCS:.c=.o)

LOBJS := $(LSRCS:.c=.o)

LOUTS := $(LOBJS:.o=.out)

LOADS := $(LOUTS:%.out=./%.out;)

VLOADS := $(LOUTS:%.out=valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --quiet ./%.out;)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

%.out: %.o
	@$(CC) $(CFLAGS) -o $@ $< $(INCLUDES) $(LDFLAGS) $(LDLIBS)
	@echo "$@ : OK!" | sed 's/_load\.out//'

$(NAME): .libftprintf .reload $(OBJS) $(LOBJS) $(LOUTS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES) $(LDFLAGS) $(LDLIBS) -lbsd

.libftprintf:
	@echo "\033[0;36m##################################### make libftprintf #####################################\033[0m"
	@$(MAKE) -C $(CURDIR)/.. $(findstring bonus, $(MAKECMDGOALS))

.reload:
	@echo "\033[0;36m################################## (re)load tests entries ##################################\033[0m"
	@$(RM) $(LOBJS)
	@$(RM) $(LOUTS)
	@$(RM) $$(echo "$(NAME)" | sed 's/\(\.o\)ut/\1/')

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
	@if [ ! -d "ft_printf_tester" ] || [ -z "$$(ls -A ft_printf_tester)" ]; then \
		git submodule update --init ft_printf_tester; \
		sed -i 's/\(LIBFTPRINTF_DIR = \.\.\/\)/\1\.\./' ft_printf_tester/Makefile; \
	fi
	@if [ ! -d "printfTester" ] || [ -z "$$(ls -A printfTester)" ]; then \
		git submodule update --init printfTester; \
		echo "#ifndef FT_PRINTF_H\n# define FT_PRINTF_H\n\nint	ft_printf(const char *format, ...);\n\n#endif" > printfTester/ft_printf.h; \
		sed -i 's/\(\.\.\)/\1\/\1/g' printfTester/Makefile; \
		sed -i 's/\(-I utils\/ -I\.\)\.\/\.\./\1/' printfTester/Makefile; \
		sed -i 's/: update/:/g' printfTester/Makefile; \
	fi
	@echo "\033[0;36m############################# paulo-santana : ft_printf_tester #############################\033[0m"
	@$(MAKE) -C ft_printf_tester/ $(PAULO_RULE)
	@echo "\033[0;36m################################# Tripouille : printfTester ################################\033[0m"
	@$(MAKE) -C printfTester/ $(TRIPOUILLE_RULE)

bonus:

all: norm valgrind-test community-tests

clean:
	$(RM) $(OBJS)
	$(RM) $(LOBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LOUTS)

re: fclean all

.PHONY: re fclean clean all bonus norm valgrind-test test
