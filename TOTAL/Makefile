NAME = a.out

SRCS = 	main.cpp \
		Total.cpp \
		printTop.cpp \
		srcs/GG.cpp \
		srcs/Line.cpp \
		srcs/Love.cpp \
		srcs/Pepog.cpp \
		srcs/PriseNote.cpp \
		srcs/Rire.cpp \
		srcs/TopChatter.cpp \
		srcs/TopEmote.cpp \
		srcs/TotalEmote.cpp \



OBJS=$(SRCS:.cpp=.o)

RM =rm -f

COMP = c++

CFLAGS= -Wall -Werror -Wextra -g

all: $(NAME)

$(NAME) : $(OBJS)
	$(COMP) $(CFLAGS) $(OBJS) -o $@
	@if [ $$? -eq 0 ]; then \
		echo "\033[32;1mCompilation successful!\033[0m"; \
	fi

%.o: %.cpp
	$(COMP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re