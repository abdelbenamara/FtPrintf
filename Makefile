# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 01:10:09 by abenamar          #+#    #+#              #
#    Updated: 2023/02/07 01:23:26 by abenamar         ###   ########.fr        #
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

SRCS += utils/ft_uitoa_base.c

SRCS += specification/ft_is_specifier.c
SRCS += specification/ft_specification_len.c

SRCS += conversion/ft_init_conversions.c
SRCS += conversion/ft_put_c_conversion_fd.c
SRCS += conversion/ft_put_s_conversion_fd.c
SRCS += conversion/ft_put_p_conversion_fd.c
SRCS += conversion/ft_put_d_conversion_fd.c
SRCS += conversion/ft_put_i_conversion_fd.c
SRCS += conversion/ft_put_u_conversion_fd.c
SRCS += conversion/ft_put_x_conversion_fd.c
SRCS += conversion/ft_put_upper_x_conversion_fd.c
SRCS += conversion/ft_put_percent_conversion_fd.c
SRCS += conversion/ft_put_conversion_fd.c

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
