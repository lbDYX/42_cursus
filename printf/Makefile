NAME	=	libftprintf.a
SRCS	=	ft_printf.c\
				ft_type_cs.c\
				ft_type_pxX.c\
				ft_type_idu.c
CC	=	gcc
RM	=	rm -rf
FLAGS	=	-Wall -Wextra -Werror
LIBC	=	ar -rcs
OBJT	=	$(SRCS:.c=.o)
DEPT = $(SRCS:.c=.d)
OBJTS = $(BONUS:.c=.o)
DEPTS = $(SRCS:.c=.d)
all:	$(NAME)
-include $(DEPT)
#Para compilar las funciones *.c
%.o:%.c #libft.h
	$(CC) -MMD $(FLAGS) -c $< -o $@
$(NAME):	${OBJT}
	$(LIBC) $(NAME) $(OBJT)
fclean: clean
	$(RM) $(NAME)
clean:
	$(RM) $(OBJT) $(OBJTS) $(DEPT) $(DEPTS)
re: fclean all
.PHONY: clean fclean re bonus
