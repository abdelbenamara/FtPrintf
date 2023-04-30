# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 01:10:09 by abenamar          #+#    #+#              #
#    Updated: 2023/04/30 11:21:34 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

LIBFT := $(CURDIR)/libft/libft.a

INCLUDES := -I $(CURDIR)
INCLUDES += -I $(CURDIR)/conversion
INCLUDES += -I $(CURDIR)/conversion/specifications
INCLUDES += -I $(CURDIR)/utils
INCLUDES += -I $(CURDIR)/libft

SRCS := ft_printf.c 
SRCS += ft_dprintf.c 
SRCS += ft_vprintf.c 
SRCS += ft_vdprintf.c 

SRCS += utils/ft_max_width.c
SRCS += utils/ft_min_width.c
SRCS += utils/ft_uitoa_base.c
SRCS += utils/ft_uiptrtoa_base.c

SRCS += conversion/specifications/ft_adjust_width.c
SRCS += conversion/specifications/ft_is_flag.c
SRCS += conversion/specifications/ft_is_specifier.c
SRCS += conversion/specifications/ft_parse_specifications.c

SRCS += conversion/ft_vdconvert.c
SRCS += conversion/ft_vdint_conversion.c
SRCS += conversion/ft_vdptr_conversion.c
SRCS += conversion/ft_vdstr_conversion.c
SRCS += conversion/ft_vduint_conversion.c

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
