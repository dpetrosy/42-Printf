NAME			= libftprintf.a
CC				= cc
CFLAGS			= -Wall -Wextra -Werror
AR				= ar
ARFLAGS			= -rcs
INCLUDES 		= -Iincludes
SRCS_DIR		= srcs
SRCS			= srcs/ft_printf.c srcs/ft_putnbr_base.c srcs/ft_putstr.c srcs/ft_strchr.c
OBJS_DIR		= objs
OBJS			= $(patsubst $(SRCS_DIR)/%.c, $(OBJS_DIR)/%.o, $(SRCS))
MKDIR			= mkdir -p
RM				= rm -rf

RESET			= "\033[0m"
BLACK    		= "\033[30m"    # Black
RED      		= "\033[31m"    # Red
GREEN    		= "\033[32m"    # Green
YELLOW   		= "\033[33m"    # Yellow
BLUE     		= "\033[34m"    # Blue
MAGENTA  		= "\033[35m"    # Magenta
CYAN     		= "\033[36m"    # Cyan
WHITE    		= "\033[37m"    # White

all : $(NAME)

$(NAME) : $(OBJS)
	@echo $(YELLOW) " - Compiling $(NAME)..." $(RESET)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo $(GREEN)" - Compiling FINISHED"$(RESET)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJS_DIR) :
	@$(MKDIR) $(OBJS_DIR)

clean :
	@$(RM) $(OBJS_DIR)

fclean : clean
	@$(RM) $(NAME)
	@echo  $(RED) " - Cleaned!" $(RESET)

re: fclean all

.PHONY: all clean fclean re 
