/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-11 15:14:35 by jcongolo          #+#    #+#             */
/*   Updated: 2024-12-11 15:14:35 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

FLAGS = -Wall -Werror -Wextra
CC = cc
NAME = bonus_libft
SRC = bonus_libft.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
re: fclean all
