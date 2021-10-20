FILES = main.cpp Zombie.cpp ZombieHorde.cpp
OFILES = $(patsubst %.cpp,%.o,$(FILES))
DEPS = $(patsubst %.o,%.d,$(OFILES))
DEPFLAGS = -MMD -MF $(@:.o=.d)
CC = clang++
NAME = moar_brainz
FLAGS = -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OFILES)
			$(CC) $(FLAGS) $(OFILES) -o $(NAME)
-include $(DEPS)

%.o: 		%.cpp
			$(CC) $(FLAGS) -c $< $(DEPFLAGS) -o $(<:.cpp=.o)

clean:
			rm -rf $(OFILES)
			rm -rf $(DEPS)

fclean:		clean
			rm -rf $(NAME) 

re:			fclean all


.PHONY:		all clean fclean re