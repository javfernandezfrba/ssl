BIN = TablasDeConversion.exe
OBJ = TablasDeConversion.o Conversion.o
CC = gcc
CFLAGS = -std=c11 -Wall -pedantic-errors -m32 -D __DEBUG__ -g3
# LDFLAGS = -static-libgcc
INCS =
LDLIBS =
RM = rm -f

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(CFLAGS) $(LDFLAGS) $(LDLIBS)

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	$(CC) -c TablasDeConversion.c -o TablasDeConversion.o $(CFLAGS) 

Conversion.o: Conversion.h Conversion.c
	$(CC) -c Conversion.c -o Conversion.o $(CFLAGS)

.PHONY: clean
clean:
	$(RM) $(OBJ) $(BIN)