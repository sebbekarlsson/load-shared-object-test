OS := $(shell uname)

$(info $(OS))

G_FLAGZ=-std=c++11 -Wall -g

ifeq ($(OS), Darwin)
    FLAGZ=$(G_FLAGZ) -std=c++11 -ldl
else
    FLAGZ=$(G_FLAGZ) -std=c++11 -ldl
endif

EXEC = app.out
SOURCES := $(wildcard src/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
OBJECTS_NO_MAIN := $(filter-out src/main.o,$(OBJECTS))

$(info $(OBJECTS_NO_MAIN))

$(EXEC): $(OBJECTS)
	g++ $(OBJECTS) $(FLAGZ) -o $(EXEC)

%.o: %.cpp includes/%.hpp
	g++ -c $(G_FLAGZ) $< -o $@

libsometype.so: $(OBJECTS)
	$(LINK.c) -shared $< -o $@

clean:
	-rm *.out
	-rm *.o
	-rm src/*.o
	-rm src/*/*.o
