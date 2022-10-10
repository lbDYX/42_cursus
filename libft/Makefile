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
BONUS = ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c
CC	=	gcc
RM	=	rm -rf
FLAGS	=	-Wall -Wextra -Werror
#Crea y mantiene archivos de biblioteca
LIBC	=	ar -rcs
OBJT	=	$(SRCS:.c=.o)
DEPT = $(SRCS:.c=.d)
OBJTS = $(BONUS:.c=.o)
DEPTS = $(SRCS:.c=.d)
all:	$(NAME)
#Saber donde estan los archivos de las dependencias
-include $(DEPT)
-include $(DEPTS)
#Para compilar las funciones *.c
%.o:%.c #libft.h
	$(CC) -MMD $(FLAGS) -c $< -o $@
$(NAME):	${OBJT}
	$(LIBC) $(NAME) $(OBJT)
bonus:  ${OBJT} ${OBJTS}
	$(LIBC) $(NAME) $(OBJT) $(OBJTS)
#Comandos para eliminar los archivos generados
fclean: clean
	$(RM) $(NAME)
clean:
	$(RM) $(OBJT) $(OBJTS) $(DEPT) $(DEPTS)
re: fclean all
.PHONY: clean fclean re bonus
