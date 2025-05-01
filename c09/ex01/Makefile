LIB_NAME = libft.a

SOURCES_DIR = srcs
SOURCES = $(SOURCES_DIR)/ft_putchar.c \
		$(SOURCES_DIR)/ft_swap.c \
		$(SOURCES_DIR)/ft_putstr.c \
		$(SOURCES_DIR)/ft_strlen.c \
		$(SOURCES_DIR)/ft_strcmp.c 

HEADERS_DIR = includes
HEADERS = $(HEADERS_DIR)/ft.h

OBJECTS_DIR = $(SOURCES_DIR)
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(LIB_NAME)

$(LIB_NAME): $(OBJECTS)
	ar rc $(LIB_NAME) $(OBJECTS)
	ranlib $(LIB_NAME)

$(OBJECTS): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -I$(HEADERS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all
