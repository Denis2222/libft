SRCS = ft_putchar.c \
	   ft_putstr.c \
	   ft_putnbr.c \
	   ft_strcmp.c \
	   ft_strlen.c \
	   ft_strcat.c \
	   ft_strcmp.c \
	   ft_strcpy.c \
	   ft_strdup.c \
	   ft_strlen.c \
	   ft_strncat.c \
	   ft_strncmp.c \
	   ft_strncpy.c \
	   ft_strrev.c \
	   ft_strstr.c \
	   ft_isprint.c \
	   ft_isdigit.c \
	   ft_isalpha.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isupper.c \
	   ft_islower.c \
	   ft_isblank.c \
	   ft_isspace.c \
	   ft_atoi.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memcmp.c \
	   ft_memmove.c \
	   ft_strnstr.c \
	   ft_memchr.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strlcat.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_strsplit.c \
	   ft_tablen.c \
	   ft_itoa.c \
	   ft_putendl.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_lstnew.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_lstadd.c \
	   ft_lstpush.c \
	   ft_lstpush_back.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_sqrt.c \
	   ft_tablen.c \
	   ft_lstlen.c \
	   ft_abs.c \
	   ft_lstrev.c \
	   get_next_line.c

LIBA = libft.a
NAME = $(LIBA)
GCC_FLAGS = -Wall -Werror -Wextra
CC = gcc $(GCC_FLAGS)
SRCDIR = ./
OBJDIR = ./
AR = ar -cq
RM = rm -rf
# standart
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@echo "Link $^"
	@ranlib $@
	@echo "[$@] Complete"

$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@mkdir -p $(OBJDIR)
	@$(CC) -o $@ -c $^
	@echo "[√]$^ "

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(LIBA)

re: fclean all
