BIN = Duck
CXX = g++
CXXFLAGS = -g
#INCLUDE = duck.h behavior.h

all: $(BIN)

test: 
	valgrind --leak-check=yes ./$(BIN)

$(BIN): %: %.cpp $(INCLUDE)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf $(BIN) *.o core.*
