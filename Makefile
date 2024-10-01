# Nombre del ejecutable
TARGET = programa

# Compilador
CC = gcc

# Flags del compilador
CFLAGS = -Wall -Wextra -g

# Archivos fuente
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c
ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c
ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

# Archivos objeto (se derivan de los archivos fuente)
OBJS = $(SRCS:.c=.o)

# Regla por defecto: compilar todo
all: $(TARGET)

# Regla para compilar el ejecutable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Regla para crear la librería estática
$(LIBRARY): $(OBJS)
	ar rcs $(LIBRARY) $(OBJS)

# Regla para compilar el ejecutable con la librería estática
$(TARGET): $(LIBRARY)
	$(CC) $(CFLAGS) -o $(TARGET) main.c -L. -lmibiblioteca


# Regla para compilar los archivos .o a partir de los archivos .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar archivos generados
clean:
	rm -f $(OBJS) $(TARGET)

# Limpiar archivos generados y de depuración
cleanall: clean
	rm -f *.out *.gch

# Regla 'run' para compilar y ejecutar el programa
run: all
	./$(TARGET)
