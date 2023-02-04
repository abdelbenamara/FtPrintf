# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 01:10:09 by abenamar          #+#    #+#              #
#    Updated: 2023/02/04 23:04:02 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

LIBFT := $(CURDIR)/libft/libft.a

INCLUDES := -I $(CURDIR)
INCLUDES += -I $(CURDIR)/libft
INCLUDES += -I $(CURDIR)/specifier

SRCS := ft_printf.c 
SRCS += ft_dprintf.c 
SRCS += ft_vprintf.c 
SRCS += ft_vdprintf.c 

SRCS += conversion/ft_is_specifier.c
SRCS += conversion/ft_specification_len.c
SRCS += conversion/ft_uitoa.c
SRCS += conversion/ft_putc_conversion_fd.c
SRCS += conversion/ft_puts_conversion_fd.c
SRCS += conversion/ft_putp_conversion_fd.c
SRCS += conversion/ft_putd_conversion_fd.c
SRCS += conversion/ft_puti_conversion_fd.c
SRCS += conversion/ft_putu_conversion_fd.c
SRCS += conversion/ft_putx_conversion_fd.c
SRCS += conversion/ft_putupper_x_conversion_fd.c
SRCS += conversion/ft_putpercent_conversion_fd.c
SRCS += conversion/ft_putconversion_fd.c

ifneq (, $(findstring bonus, $(MAKECMDGOALS)))
endif

OBJS := $(SRCS:.c=.o)

CC := cc

CFLAGS := -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

AR := ar

AROPTIONS := rcs

RM := rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME): $(LIBFT) $(OBJS)
	$(AR) $(AROPTIONS) $(NAME) $(OBJS)

$(LIBFT):
	@$(MAKE) -C $(CURDIR)/libft $(findstring bonus, $(MAKECMDGOALS))

bonus: $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all bonus
