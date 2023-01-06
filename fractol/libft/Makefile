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
NAME	=	libft.a
CC	=	gcc
RM	=	rm -rf
FLAGS	=	-Wall -Wextra -Werror
LIBC	=	ar -rcs
SRCS	=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
				ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
				ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_memchr.c\
				ft_strchr.c ft_memcmp.c ft_strrchr.c ft_strncmp.c ft_strnstr.c\
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
				ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
				ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
				ft_lstclear.c ft_lstiter.c ft_lstmap.c
D_OBJ = obj
#.o
OBJ = $(addprefix $(D_OBJ)/, $(SRCS:.c=.o))
DEP = $(addprefix $(D_OBJ)/, $(SRCS:.c=.d))
#Bonus .o
B_OBJ = $(addprefix $(D_OBJ)/, $(BONUS:.c=.o))
B_DEP = $(addprefix $(D_OBJ)/, $(BONUS:.c=.d))
all:	dir $(NAME)
-include $(DEP)
-include $(B_DEP)

#Rules
dir: 
	@mkdir -p $(D_OBJ)
$(D_OBJ)/%.o:%.c
	$(CC) -MMD $(FLAGS) -c $< -o $@
$(NAME):	${OBJ}
	$(LIBC) $(NAME) $(OBJ)
	@touch $(NAME)
	@echo -e "$(B)$(ligth)-->$(G)Library created OK$(E)"
bonus:	dir ${B_OBJ}
	@if [ -f bonus ]; then\
		echo -e "$(B)$(ligth)-->make:$(E)$(ligth) 'bonus' is up to date.$(E)";\
	else\
		$(LIBC) $(NAME) $(B_OBJ);\
		touch bonus;\
		echo -e "$(B)$(ligth)-->$(G)Bonus created OK$(E)";\
	fi
.PHONY: clean fclean re
fclean: clean
	$(RM) $(NAME)
	@echo -e "$(B)$(ligth)-->$(E)$(ligth)Full clean: $(Y)*.a$(E)"
clean:
	$(RM) $(D_OBJ) bonus
	@echo -e "$(B)$(ligth)-->$(E)$(ligth)Clean: $(Y)*.o, *.d$(E)"
re: fclean all