GCC = gcc -Wall -Wextra -Werror
TARGET = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c
OBJS = $(SRCS:.c=.o)

all:$(TARGET)

$(TARGET) : $(OBJS)
	ar rc $(TARGET) $(OBJS)

%.o : %.c  libft.h
	$(GCC) -c $< -o $@ -I./

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS) $(TARGET)

re :
	make fclean
	make all

.PHONY: clean all
