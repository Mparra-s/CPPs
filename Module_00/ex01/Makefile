NAME	=	PhoneBook					

SRCS	=  	PhoneBook.cpp\
		
OBJS	=	$(SRCS:.cpp=.o)					

CXX	=	c++ 								

RM	=	rm -f								

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all	:	$(NAME)									

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean	:										
	$(RM) $(OBJS)

fclean	: clean						
	$(RM) $(NAME)

re	:	fclean all							

.PHONY	:	all clean fclean re	