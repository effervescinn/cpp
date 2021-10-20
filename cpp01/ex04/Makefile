FILES = main.cpp
OFILES = $(patsubst %.cpp,%.o,$(FILES))
DEPS = $(patsubst %.o,%.d,$(OFILES))
DEPFLAGS = -MMD -MF $(@:.o=.d)
CC = clang++
NAME = replace
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
			rm -rf *.replaced

fclean:		clean
			rm -rf $(NAME) 

re:			fclean all


.PHONY:		all clean fclean re