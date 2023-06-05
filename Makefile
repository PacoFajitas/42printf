# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 16:22:01 by tfiguero          #+#    #+#              #
#    Updated: 2023/05/20 22:47:05 by tfiguero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = ft_printf.h
MKFL	= Makefile
NAME = libftprintf.a

OBJ_DIR	= obj/

SRC =	ft_printf.c\
        ft_putchar.c\
        ft_putstr.c\
        ft_putnbr.c\
        ft_puthex.c\
		ft_putptr.c\
		ft_puthex_pt.c\
		ft_putnbr_u.c\

RM = rm -rf
MP	= mkdir -p

CFLAGS = -Werror -Wall -Wextra -W -O3 -Ofast 

LIBC = ar -rcs

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
DEP	= $(addsuffix .d, $(basename $(OBJ)))

$(OBJ_DIR)%.o: %.c $(MKFL)
	@$(MP) $(dir $@)
	${CC} ${CFLAGS} -MMD -I ./ -c $< -o $@

all:
	@$(MAKE) $(NAME)

$(NAME):: $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

$(NAME)::
	@echo "Hello, i'm already compiled 🌚"

-include $(DEP)

clean:
	$(RM) $(OBJ)

fclean:
	@$(MAKE) clean
	$(RM) $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re