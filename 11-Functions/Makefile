INC_DIR = Headers
SRC_DIR = Sources
OBJ_DIR = Objects
CXXFLAGS = -c -Wall -I. -IHeaders
CC = g++

SRCS = $(SRC_DIR)/*.cpp 
OBJS = $(OBJ_DIR)/*.o
#The wildcard and patsubt commads will come handy

DEPS = $(INC_DIR)/*.h
#need to use an automatic dependency generator

output: $(OBJ_DIR)/main.o $(OBJ_DIR)/function.o
	$(CC) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(DEPS)
	$(CC) $(CXXFLAGS) $< -o $@


clean: 
	rm $(OBJ_DIR)/*.o output