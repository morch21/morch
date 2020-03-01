# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mshchego <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/23 17:33:25 by mshchego          #+#    #+#              #
#    Updated: 2020/02/23 19:23:27 by mshchego         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -c -Wall -Wextra -Werror
SRC = ./ft_*.c
OUTS = ./*.o
INCLUDES = *.h

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRC)
	ar rc $(NAME) $(OUTS)

clean:
	@/bin/rm -f $(OUTS)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all
