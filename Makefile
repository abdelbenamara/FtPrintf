# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 01:10:09 by abenamar          #+#    #+#              #
#    Updated: 2023/04/16 14:27:41 by abenamar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

LIBFT := $(CURDIR)/libft/libft.a

INCLUDES := -I $(CURDIR)
INCLUDES += -I $(CURDIR)/conversion
INCLUDES += -I $(CURDIR)/conversion/specifiers
INCLUDES += -I $(CURDIR)/utils
INCLUDES += -I $(CURDIR)/libft

SRCS := ft_printf.c 
SRCS += ft_dprintf.c 
SRCS += ft_vprintf.c 
SRCS += ft_vdprintf.c 

SRCS += utils/ft_uitoa_base.c
SRCS += utils/ft_uiptrtoa_base.c

SRCS += conversion/specifiers/ft_is_specifier.c
SRCS += conversion/specifiers/ft_parse_flags.c
SRCS += conversion/specifiers/ft_parse_specifier.c

SRCS += conversion/ft_vdc_conversion.c
SRCS += conversion/ft_vdconvert.c
SRCS += conversion/ft_vdd_conversion.c
SRCS += conversion/ft_vdi_conversion.c
SRCS += conversion/ft_vdp_conversion.c
SRCS += conversion/ft_vdpercent_conversion.c
SRCS += conversion/ft_vds_conversion.c
SRCS += conversion/ft_vdu_conversion.c
SRCS += conversion/ft_vdupperx_conversion.c
SRCS += conversion/ft_vdx_conversion.c

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
