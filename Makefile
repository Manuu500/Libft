NAME = libft.a

# Archivos fuente
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
       ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
       ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
       ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
       ft_toupper.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c

FLAGS = -Wall -Wextra -g -Werror

CC = cc

CLEAN = rm -rf

# CLEAN = del /Q /F

OBJ := $(SRCS:.c=.o)

OBJ_BONUS := $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(OBJ): $(SRCS)
	$(CC) -g $(FLAGS) -c $(SRCS)

$(NAME): $(OBJ)
	ar -rsc $(NAME) $(OBJ)

bonus: $(OBJ_BONUS)
	ar -rsc $(NAME) $(OBJ_BONUS)

$(OBJ_BONUS): %.o: %.c
	$(CC) -g $(FLAGS) -c $(SRCS_BONUS)

clean:
	@$(CLEAN) *.o

fclean: clean
	@$(CLEAN) *.a

re: fclean all

.PHONY: all clean fclean re bonus
