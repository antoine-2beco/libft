# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 13:21:18 by ade-beco          #+#    #+#              #
#    Updated: 2023/10/18 15:00:02 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c

OBJS		=	$(SRCS:.c=.o)

CC			=	cc

CFLAGS		=	-Wall -Wextra -Werror -g

LIBC		=	ar rcs

INC			=	-I ./includes

all:		$(OBJS) $(NAME)

%.o:		%.c
				@echo "Compiling $<"
				@$(CC) $(CFLAGS) -c $(INC) $< -o $(<:c=o)
				@echo "Compiling OK!"

$(NAME):	$(OBJS)
				@echo "Creating executable $@"
				@$(LIBC) $(NAME) $(OBJS)
				@echo "Job's done!"
clean:
				@echo "Cleaning objects..."
				@rm -f $(OBJS) $(BONUS_OBJS)
				@echo "Cleaned up!"

fclean:		clean
				@echo "Cleaning..."
				@rm -f $(NAME)
				@echo "Cleaned up!"

re:			fclean all

.PHONY:		all clean fclean re