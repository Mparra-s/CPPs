NAME	=	Abstract

SRC_DIR	=	src
OBJ_DIR	=	obj
INC_DIR	=	include
DEP_DIR	=	deps

SRCS	=	main.cpp\
			AAnimal.cpp\
			Brain.cpp\
			Cat.cpp\
			Dog.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp\

SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))

OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS = $(SRCS:$(SRC_DIR)/%.cpp=$(DEP_DIR)/%.d)

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -I$(INC_DIR) -MMD -MP

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp | $(OBJ_DIR) $(DEP_DIR)
	$(CXX) $(CXXFLAGS) -MF $(DEP_DIR)/$*.d -c $< -o $@

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

$(DEP_DIR) :
	mkdir -p $(DEP_DIR)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) -r $(OBJ_DIR)
	$(RM) -r $(DEP_DIR)
	$(RM) $(NAME)

re : fclean all

-include $(DEPS)

.PHONY : fclean clean all re
