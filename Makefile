
.PHONY: all clean fclean re force
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap

# _____________________  SRCS  __________________________

# libft files
LIBFT_A = libft.a
LIBFT_H = libft.h

# libft dir
LIBFT_DIR = srcs/libft/

# p_swap file

P_SWAP_H = includes/push_swap.h
P_SWAP_MAIN = srcs/push_swap.c

# pswap dir

INC_DIR = includes/
PSWAP_PARS = 	srcs/pars/is_valid_int_list.c\
				srcs/pars/init_pile.c\
				srcs/pars/get_highest.c\
				srcs/pars/get_lowest.c\
				srcs/pars/normalize.c\

# PSWAP_TOOLS
PSWAP_PRINT = srcs/error/print_stuff.c\

PSWAP_SORT = 	srcs/sort/is_sorted.c\
				srcs/sort/ft_push.c\
				srcs/sort/ft_swap.c\
				srcs/sort/ft_reverse_rotate.c\
				srcs/sort/ft_rotate.c\
				srcs/sort/exception/exception_handler.c\
				srcs/sort/exception/sort_three.c\
				srcs/sort/exception/sort_four.c\
				srcs/sort/exception/sort_five.c\

# Define the source files
SRCS = $(P_SWAP_MAIN) $(PSWAP_PARS) $(PSWAP_PRINT) $(PSWAP_SORT)

# _____________________  DEFINE OBJECT DESTINATION  __________________________

# This will create a list of object files from the list of source files
OBJS_DIR = .objs/
OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

# _____________________  SRCS  __________________________

# Setting up an custom error message
COMPIL_ERROR = "$(RED)[ERROR] Compilation failed$(RESET)"
MISSING_FILE = "est manquant ou introuvable. Vérifiez que tous les fichiers source sont présents."
# Check source files
all: print-banner check_sources $(NAME)

print-banner:
	@cols=$$(tput cols); \
	printf '%*s\n' "$${cols}" '' | tr ' ' '='; \
	echo "PUSH_SWAP !"; \
	printf '%*s\n' "$${cols}" '' | tr ' ' '='

check_sources:
	@for file in $(SRCS); do \
		if [ ! -f $$file ]; then \
			printf "$(RED)[ERROR] Le fichier $$file $(MISSING_FILE) $(RESET)"; \
		fi; \
	done

# Compile the object files
$(OBJS_DIR)%.o: %.c
	@mkdir -p $(dir $@)
	@printf "$(BLUE)$(notdir $@) $(RESET)"
	@gcc $(CFLAGS) -I $(INC_DIR) $< -c -o $@ && echo "$(GREEN)>>> SUCCESS $(RESET)" || { echo "$(ERROR_MSG)"; exit 1; }

# Create lib with ar rc
${NAME}: check_sources ${LIBFT_A} ${OBJS}
	@gcc ${CFLAGS} ${OBJS} $(LIBFT_DIR)$(LIBFT_A) -o $(NAME) || { echo "$(ERROR_MSG)"; exit 1; }
	@echo "$(GREEN)=============== All push_swap function has been compiled ===============$(RESET)"

# Get libft
$(LIBFT_A):
	@printf "$(YELLOW)1/  Building libft...........................................\n$(RESET)"
	@$(MAKE) -C $(LIBFT_DIR) --no-print-directory || @printf "Issue while attempting compiling libft"
	@cp $(LIBFT_DIR)$(LIBFT_H) $(INC_DIR) && cp $(LIBFT_DIR)ansi_format.h $(INC_DIR)

# Use to force libft to relink if something has changed within
force:

# Clean it all up
clean:
	@mv $(INC_DIR)$(LIBFT_H) $(OBJS_DIR) 
	@rm -rf $(OBJS_DIR) && echo "$(YELLOW)=============== All object files has been removed ===============$(RESET)"

fclean: clean
	@rm -f  $(NAME) && echo "$(YELLOW)=============== $(NAME) has been removed ===============$(RESET)"

re: fclean all

debug: CFLAGS += -g3
debug: re
# ________________ Color codes ________________________

RESET      = \\033[0m
RED        = \\033[31m
GREEN      = \\033[32m
YELLOW     = \\033[33m
BLUE       = \\033[34m
MAGENTA    = \\033[35m
CYAN       = \\033[36m
WHITE      = \\033[37m
BOLD       = \\033[1m
