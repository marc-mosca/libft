# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 14:26:41 by mmosca            #+#    #+#              #
#    Updated: 2022/05/26 19:43:08 by mmosca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##	~~	Properties -------------------------------------------------------------

##	~	General -----------------------

NAME		:=	libft.a
MKDIR		:=	mkdir -p

##	~	Folders -----------------------

INCS_DIR	:=	incs
SRCS_DIR	:=	srcs
OBJS_DIR	:=	.objs

##	~	Flags -------------------------

CFLAGS		:=	-Wall -Wextra -Werror
OFLAGS		:=	-O2 -pipe
DFLAGS		:=	-g3 -fsanitize=address
IFLAGS		:=	-I ./$(INCS_DIR)/ -I ./$(INCS_DIR)/prototypes/
RFLAGS		:=	rcs

##	~	Sources files -----------------

VPATH		:=																\
	$(SRCS_DIR)/:															\
	$(SRCS_DIR)/characters/:												\
	$(SRCS_DIR)/files/:														\
	$(SRCS_DIR)/lists/:														\
	$(SRCS_DIR)/memory/:													\
	$(SRCS_DIR)/prints/:													\
	$(SRCS_DIR)/strings/:

SRCS		:=																\
	ft_isalnum.c															\
	ft_isalpha.c															\
	ft_isascii.c															\
	ft_isdigit.c															\
	ft_islower.c															\
	ft_isprint.c															\
	ft_isspace.c															\
	ft_isupper.c															\
	ft_tolower.c															\
	ft_toupper.c															\
	ft_close.c																\
	ft_open.c																\
	ft_lstadd_back.c														\
	ft_lstadd_front.c														\
	ft_lstclear.c															\
	ft_lstdelone.c															\
	ft_lstiter.c															\
	ft_lstlast.c															\
	ft_lstmap.c																\
	ft_lstnew.c																\
	ft_lstsize.c															\
	ft_bzero.c																\
	ft_calloc.c																\
	ft_memchr.c																\
	ft_memcmp.c																\
	ft_memcpy.c																\
	ft_memdel.c																\
	ft_memmove.c															\
	ft_memset.c																\
	ft_putchar.c															\
	ft_putendl.c															\
	ft_putnbr.c																\
	ft_putstr.c																\
	ft_atoi.c																\
	ft_itoa.c																\
	ft_split.c																\
	ft_strchr.c																\
	ft_strdup.c																\
	ft_striteri.c															\
	ft_strjoin.c															\
	ft_strlcat.c															\
	ft_strlcpy.c															\
	ft_strlen.c																\
	ft_strmapi.c															\
	ft_strncmp.c															\
	ft_strnstr.c															\
	ft_strtrim.c															\
	ft_substr.c

##	~	Objects files -----------------

OBJS		:=	$(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

##	~	Headers -----------------------

HEADERS		:=																\
	$(addprefix $(INCS_DIR)/prototypes/, characters.h)						\
	$(addprefix $(INCS_DIR)/prototypes/, files.h)							\
	$(addprefix $(INCS_DIR)/prototypes/, lists.h)							\
	$(addprefix $(INCS_DIR)/prototypes/, memory.h)							\
	$(addprefix $(INCS_DIR)/prototypes/, prints.h)							\
	$(addprefix $(INCS_DIR)/prototypes/, strings.h)							\
	$(addprefix $(INCS_DIR)/, defines.h)									\
	$(addprefix $(INCS_DIR)/, libft.h)										\
	$(addprefix $(INCS_DIR)/, structures.h)

##	~~	Rules ------------------------------------------------------------------

.PHONY: all clean fclean re

##	~	Main rules --------------------

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(RFLAGS) $@ $<

re:	fclean all

##	~	Compilation rule --------------

$(OBJS):	|	$(OBJS_DIR)

$(OBJS_DIR):
	$(MKDIR) $@

$(OBJS_DIR)/%.o:	%.c $(HEADERS) Makefile
	$(CC) $(CFLAGS) $(IFLAGS) -c ./$< -o ./$@

##	~	Cleaning rules ----------------

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
