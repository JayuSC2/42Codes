CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_bzero.c\
ft_isalnum.c\
ft_isascii.c\
ft_isalpha.c\
ft_isdigit.c\
ft_isprint.c\
ft_tolower.c\
ft_toupper.c\
*ft_memcpy.c\
ft_memcmp.c\
*ft_memset.c\
*ft_memchr.c\
*ft_strchr.c\
*ft_strrchr.c\
ft_strlen.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_strncmp.c

OBJ = $(SRC:.c=.o)

HEADERS = libft_h

EXEC = libft.a

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(EXEC) $(OBJ)






