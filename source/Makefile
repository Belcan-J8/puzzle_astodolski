# Define executable name
BIN 		= puzzle

# Define source files
SRC 		= Car.cpp FuelGauge.cpp Logger.cpp main.cpp
OBJ      	= $(SRC:%.cpp=%.o)

# need -fpermissive to let CXX compile legacy C code if applicable
CXX			= g++
CXXFLAGS 	= $(CFLAGS) -fpermissive
CXXFLAGS 	+= -Wall -ansi -std=c++17 -pedantic

.PHONY		= all clean distclean

# Main entry point
#
all: $(BIN)

# For linking object file(s) to produce the executable
#
$(BIN): $(OBJ)
	@echo Linking $@
	@$(CXX) $^ $(LDFLAGS) $(LIBS) -o $@

# For compiling source file(s)
#
.cpp.o:
	@echo Compiling $<
	@$(CXX) -c $(CXXFLAGS) $<


# For cleaning up the project
#
clean:
	$(RM) $(OBJ)

distclean: clean
	$(RM) $(BIN)
