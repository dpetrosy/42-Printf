NAME			= libftprintf.a
CC				= cc
CFLAGS			= -Wall -Wextra -Werror
AR				= ar
ARFLAGS			= -rcs
INCLUDES_DIR	= includes
INCLUDES_FLAG	= -I$(INCLUDES_DIR)
INCLUDES		= $(INCLUDES_DIR)/ft_printf.h
SRCS_DIR		= srcs
SRCS			= $(SRCS_DIR)/ft_printf.c $(SRCS_DIR)/ft_putnbr_base.c $(SRCS_DIR)/str_utils.c
OBJS_DIR		= objs
OBJS			= $(patsubst $(SRCS_DIR)/%.c, $(OBJS_DIR)/%.o, $(SRCS))
MKDIR			= mkdir -p
RM				= rm -rf

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c $(INCLUDES) | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES_FLAG) -c $< -o $@

$(OBJS_DIR) :
	$(MKDIR) $(OBJS_DIR)

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 
