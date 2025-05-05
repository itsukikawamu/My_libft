# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/05 20:33:53 by ikawamuk          #+#    #+#              #
#    Updated: 2025/05/05 20:33:55 by ikawamuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRCS=$(wildcard src/*.c)
OBJS=$(patsubst src/%.c, obj/%.o, $(SRCS))
INCDIR=include

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs $@ $^

obj/%.o: src/%.c
	@mkdir -p obj
	cc -c $< -I $(INCDIR) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJS)
	ar rcs $(NAME) $(OBJS)

so: bonus
	gcc -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re bonus so
