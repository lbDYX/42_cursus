#Colors
E = \033[m
R = \033[31m
G = \033[32m
Y = \033[33m
B = \033[34m
#Font
ligth = \033[1m
dark = \033[2m
italic = \033[3m
#Variables
NAME	=	libftprintf.a
CC	=	gcc
RM	=	rm -rf
LIBC	=	ar -rcs
FLAGS	=	-Wall -Wextra -Werror
SRCS  = ft_printf.c ft_type_cs.c\
		ft_type_pxX.c ft_type_idu.c
# Dir
D_OBJ = obj
# .o
OBJT = $(addprefix $(D_OBJ)/, $(SRCS:.c=.o))
DEPT = $(addprefix $(D_OBJ)/, $(SRCS:.c=.d))
all:	dir $(NAME)
-include $(DEPT)
#Rules
dir: 
	@mkdir -p $(D_OBJ)
$(D_OBJ)/%.o:%.c
	$(CC) -MMD $(FLAGS) -c $< -o $@
$(NAME):	${OBJT}
	$(LIBC) $(NAME) $(OBJT)
	@echo -e "$(B)$(ligth)-->$(G)Library created OK$(E)"
.PHONY: clean fclean re
fclean: clean
	$(RM) $(NAME)
	@echo -e "$(B)$(ligth)-->$(E)$(ligth)Full clean: $(Y)*.a$(E)"
clean:
	$(RM) $(D_OBJ)
	@echo -e "$(B)$(ligth)-->$(E)$(ligth)Clean: $(Y)*.o, *.d$(E)"
re: fclean all