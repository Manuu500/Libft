# Nombre del ejecutable
TARGET = programa

# Nombre de la librería estática
LIBRARY = libmibiblioteca.a

# Compilador
CC = gcc

# Flags del compilador
CFLAGS = -Wall -Wextra -g

# Archivos fuente
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
       ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
       ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
       ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
       ft_toupper.c

# Archivos objeto (se derivan de los archivos fuente)
OBJS = $(SRCS:.c=.o)

# Regla por defecto: compilar todo
all: $(TARGET)

# Regla para crear la librería estática
$(LIBRARY): $(OBJS)
	ar rcs $(LIBRARY) $(OBJS)

# Regla para compilar el ejecutable y enlazar la librería estática
$(TARGET): $(LIBRARY) main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o -L. -lmibiblioteca

# Regla para compilar el archivo main.c
main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

# Regla para compilar los archivos .o a partir de los archivos .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar archivos generados
clean:
	rm -f $(OBJS) main.o $(TARGET) $(LIBRARY)

# Limpiar archivos generados y de depuración
cleanall: clean
	rm -f *.out *.gch

# Regla 'run' para compilar y ejecutar el programa
run: all
	./$(TARGET)

