#
#Peter Weber  1936796
#
#Gruppe: Do12
#Uebungsblatt: 3 Aufgabe: 3
#

#	Makefile 
#		Ausfuehren mit make
#		Aufraeumen mit make clean

# Variablen mit Dateinamen, Compileraufruf und Optionen fuer Compiler und Linker
HDR     = faku.h n_ueber_k.h											#header einfuegen -> hpp
SRC		= binomi.cpp faku.cpp n_ueber_k.cpp								#code einfuegen   -> cpp
OBJ     = $(SRC:.cpp=.o)
BIN     = main										#name der ausfuehrbaren datei
CC      = g++
CCFLAGS = -std=c++17
LDFLAGS = -o $(BIN)

# Defaulttarget
all: $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ)

# Uebersetzungsregel mit Hilfe von Patterns
%.o: %.cpp $(HDR)
	$(CC) $(CCFLAGS) -c $<

# Aufraeumen des Verzeichnisses
.PHONY: clean
clean:
	rm -rf *.o $(BIN)