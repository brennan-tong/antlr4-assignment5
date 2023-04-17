ANTLR4_CPP_RUNTIME_DIR=/usr/local/include/antlr4-runtime
ANTLR4_CPP_LIB_DIR=/usr/local/lib
ANTLR4_CPP_LIB=antlr4-runtime
CPP=clang++
CPP_FILES := $(wildcard *.cpp)
OBJ_FILES := $(addprefix ,$(notdir $(CPP_FILES:.cpp=.o)))
CPPFLAGS=-std=c++20\
	 -Wall\
	 -g\
	 -D_FORTIFY_SOURCE=2\
	 -fsanitize=bounds

all: scanner

scanner: $(OBJ_FILES)
	$(CPP) $(CPPFLAGS) -o $@ $^  \
		-L$(ANTLR4_CPP_LIB_DIR) \
		-I$(ANTLR4_CPP_RUNTIME_DIR) \
		-l$(ANTLR4_CPP_LIB)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c -o $@ $<  -I$(ANTLR4_CPP_RUNTIME_DIR)

clean:
	rm -f *.o scanner *~
