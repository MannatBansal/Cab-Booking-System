SRC_DIR := ../src
BIN_DIR := ../bin
INC_DIR := ../inc
OBJ_DIR := ../obj
LIB_DIR := ../lib

EXE := $(BIN_DIR)/main
SRC := $(wildcard $(SRC_DIR)/*.cpp)
OBJ := $(SRC:$(SRC_DIR)/%.cpp= $(OBJ_DIR)/%.o)

CXX := g++
CXXIFLAGS := -I $(INC_DIR)
CXXFLAGS := -Wall -Werror -c -g
LDFLAGS := -Llib
LDLIBS := -lm

all: $(EXE)

$(EXE) : $(OBJ) | $(BIN_DIR)
	                $(CXX) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	                $(CXX) $(CXXIFLAGS) $(CXXFLAGS) $< -o $@

$(BIN_DIR) $(OBJ_DIR) :
	                mkdir -p $@

clean:
	                @$(RM) -rv $(BIN_DIR) $(OBJ_DIR)
