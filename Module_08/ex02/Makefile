NAME	=	MutantStack

SRC_DIR	=	src
OBJ_DIR	=	obj
INC_DIR	=	include

SRCS	=	main.cpp\

SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))

OBJS :=	$(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CXX	=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

RM	=	rm -f

all	:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR) $(DEP_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) -r $(OBJ_DIR)
	$(RM) $(NAME)

re	: fclean all

.PHONY	: fclean clean all re