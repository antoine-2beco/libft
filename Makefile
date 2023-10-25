# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 13:21:18 by ade-beco          #+#    #+#              #
#    Updated: 2023/10/25 15:08:06 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS		=	$(SRCS:.c=.o)

OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

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
				@rm -f $(OBJS) $(OBJS_BONUS)
				@echo "Cleaned up!"

fclean:		clean
				@echo "Cleaning..."
				@rm -f $(NAME)
				@echo "Cleaned up!"

bonus:		$(OBJS) $(OBJS_BONUS)
				@echo "Creating executable $@"
				@$(LIBC) $(NAME) $(OBJS) $(OBJS_BONUS)
				@echo "Job's done!"

re:			fclean all

.PHONY:		all clean fclean re