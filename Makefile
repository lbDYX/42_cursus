NAME	=	libft.a
SRCS	=	ft_isdigit.c
CC	=	gcc
RM	=	rm -rf
FLAGS	=	-Wall -Wextra -Werror
OBJT	=	$(SRCS:.c=.c)
#Para compilar las funciones *.c
%.o:%.c
    $(CC) $(FLAGS) -c $< -o $@
all:	$(NAME)
#Comandos para eliminar los archivos generados
fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_O)

re: fclean all

