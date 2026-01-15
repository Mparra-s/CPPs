NAME	=	Weapon					

SRCS	=  	main.cpp\
			Weapon.cpp\
			HumanA.cpp\
			HumanB.cpp\
		
OBJS	=	$(SRCS:.cpp=.o)					

CXX	=	c++ 								

RM	=	rm -f								

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all	:	$(NAME)									

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.c									
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean	:										
	$(RM) $(OBJS)

fclean	: clean						
	$(RM) $(NAME)

re	:	fclean all							

.PHONY	:	all clean fclean re	