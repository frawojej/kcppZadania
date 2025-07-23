# Makefile dla ZadClassKcpp

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude

SRC_DIR = .
OBJ_DIR = obj

SOURCES = main.cc ZadKcpp.cc
OBJECTS = $(patsubst %.cc, $(OBJ_DIR)/%.o, $(SOURCES))

TARGET = ZadClassKcpp

all: $(OBJ_DIR) $(TARGET)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf $(OBJ_DIR) $(TARGET)

.PHONY: all clean
