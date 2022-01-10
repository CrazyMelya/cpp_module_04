NAME		=	materia

SRCS		=	main.cpp\
				AMateria.cpp\
				Character.cpp\
				Cure.cpp\
				Ice.cpp\
				MateriaSource.cpp

HEADERS		=	Dog.hpp\
				AMateria.hpp\
				Character.hpp\
				Cure.hpp\
				Ice.hpp\
				MateriaSource.hpp

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