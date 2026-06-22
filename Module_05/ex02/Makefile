NAME	=	Forms

SRC_DIR	=	src
OBJ_DIR	=	obj
INC_DIR	=	include

SRCS	=	main.cpp\
			Bureaucrat.cpp\
			ShrubberyCreationForm.cpp\
			RobotomyRequestForm.cpp\
			PresidentialPardonForm.cpp\
			AForm.cpp\

SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))

OBJS :=	$(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CXX	=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 #-I$(INC_DIR)

RM	=	rm -f

all	:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) -r $(OBJ_DIR)
	$(RM) $(NAME)

re	: fclean all

-include $(DEPS)

.PHONY	: fclean clean all re