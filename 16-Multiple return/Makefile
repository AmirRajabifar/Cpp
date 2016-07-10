INC_DIR = Headers
SRC_DIR = Sources
OBJ_DIR = Objects
CXXFLAGS = -c -Wall -I. -I$(INC_DIR)
CC = g++

SRCS = $(SRC_DIR)/*.cpp
OBJS = $(OBJ_DIR)/*.o

DEPS = $(INC_DIR)/*.h

main: $(OBJ_DIR)/main.o $(OBJ_DIR)/func.o
	$(CC) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(DEPS)
	$(CC) $(CXXFLAGS) $< -o $@

clean:
	rm $(OBJ_DIR)/*.o main
