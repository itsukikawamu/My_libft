# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/05 20:33:53 by ikawamuk          #+#    #+#              #
#    Updated: 2025/05/11 16:00:31 by ikawamuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

AR := ar
ARFLAGS := rcs
CC := cc
CFLAGS=-Wall -Wextra -Werror $(addprefix -I,$(INCLUDES))

SRCDIR := src
OBJDIR := obj
INCDIR := include

SRCFILES := $(notdir $(wildcard $(SRCDIR)/*.c))

SRCS := $(addprefix $(SRCDIR)/, $(SRCFILES))
OBJS := $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
INCLUDES := $(INCDIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all