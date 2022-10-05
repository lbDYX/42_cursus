NAME	=	libft.a
SRCS	=	ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_strlen.c\
				ft_memset.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_memchr.c\
				ft_strchr.c\
				ft_memcmp.c\
				ft_strrchr.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_atoi.c\
				ft_calloc.c\
				ft_strdup.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_split.c\
				ft_itoa.c\
				ft_strmapi.c\
				ft_striteri.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c
CC	=	gcc
RM	=	rm -rf
FLAGS	=	-Wall -Wextra -Werror
#Crea y mantiene archivos de biblioteca
LIBC	=	ar -rcs
OBJT	=	$(SRCS:.c=.o)
#Para compilar las funciones *.c
%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@
$(NAME):	${OBJT}
	$(LIBC) $(NAME) $(OBJT)
all:	$(NAME)
#Comandos para eliminar los archivos generados
fclean: clean
	$(RM) $(NAME)
clean:
	$(RM) $(OBJT) 

re: fclean all
