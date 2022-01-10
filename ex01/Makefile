NAME		=	animal

SRCS		=	main.cpp\
				Animal.cpp\
				Cat.cpp\
				Dog.cpp\
				Brain.cpp

HEADERS		=	Dog.hpp\
				Cat.hpp\
				Animal.hpp\
				Brain.hpp

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

CXX			=	c++

OBJS		=	${SRCS:.cpp=.o}

.PHONY		:	all clean fclean re

all			:	${NAME}

${NAME}		:	${OBJS}
				${CXX} ${CPPFLAGS} -o $@ $^

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean all