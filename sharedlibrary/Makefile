OS := $(shell uname)

$(info $(OS))

G_FLAGZ=-std=c++11 -Wall -g

ifeq ($(OS), Darwin)
    FLAGZ=$(G_FLAGZ) -std=c++11
else
    FLAGZ=$(G_FLAGZ) -std=c++11
endif

EXEC = wscript.out
SOURCES := $(wildcard src/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
OBJECTS_NO_MAIN := $(filter-out src/main.o,$(OBJECTS))

$(info $(OBJECTS_NO_MAIN))

%.o: %.cpp includes/%.hpp
	g++ -c $(G_FLAGZ) $< -o $@ -fPIC

libsometype.so: $(OBJECTS)
	$(LINK.c) -shared $< -o $@

clean:
	-rm *.out
	-rm *.o
	-rm src/*.o
	-rm src/*/*.o
