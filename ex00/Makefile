NAME = megaphone

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME):
		@clang++ $(CFLAGS) megaphone.cpp \
		-o $(NAME) 

clean:

fclean:
	@rm -rf $(NAME)

re: fclean all