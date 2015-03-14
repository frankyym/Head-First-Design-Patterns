BIN = Duck
CXX = g++
CXXFLAGS = -g
#INCLUDE = *.h

all: $(BIN)

test: 
	valgrind --leak-check=yes ./$(BIN)

$(BIN): %: %.cpp $(INCLUDE)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf $(BIN) *.o core.*
