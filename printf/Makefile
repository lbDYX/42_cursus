#Variables
NAME	=	libftprintf.a
CC	=	gcc
RM	=	rm -rf
LIBC	=	ar -rcs
FLAGS	=	-Wall -Wextra -Werror
SRCS  = ft_printf.c\
				ft_type_cs.c\
				ft_type_pxX.c\
				ft_type_idu.c

#Colors
END = \033[m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
#Font
ligth = \033[1m
dark = \033[2m
italic = \033[3m

#Rules
OBJT	=	$(SRCS:.c=.o)
DEPT = $(SRCS:.c=.d)
all:	$(NAME)
-include $(DEPT)

#Compilar
%.o:%.c
	$(CC) -MMD $(FLAGS) -c $< -o $@
$(NAME):	${OBJT}
	$(LIBC) $(NAME) $(OBJT)
	@echo "$(GREEN)$(ligth)Creación de la libreria OK$(END)"

#limpiar archivos
.PHONY: clean fclean re
fclean: 
	$(RM) $(NAME)
	@echo "$(YELLOW)$(ligth)Programa eliminado$(END)"
clean:
	$(RM) $(OBJT) $(DEPT)
	@echo "$(YELLOW)Dep y Objt eliminados$(END)"
re: fclean all
