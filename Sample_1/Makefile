# Compiler and flags
CXX = clang++
CXXFLAGS = -Wall -g -std=c++11

# Source, object, and executable files
SOURCE = test.cpp
OBJECT = test.o
EXECUTABLE = test

# Build executable from object file
$(EXECUTABLE): $(OBJECT)
	$(CXX) $(OBJECT) -o $(EXECUTABLE)

# Build object file from source file
$(OBJECT): $(SOURCE)
	$(CXX) $(CXXFLAGS) -c $(SOURCE) -o $(OBJECT)

# Run the executable
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# Clean up generated files
.PHONY: clean

clean:
	rm -f $(OBJECT) $(EXECUTABLE)
