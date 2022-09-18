CC=gcc
CPP=g++
CFLAGS=-I.

DEPS = menu.h
OBJ =  menu.cpp main.c

%.o: %.c $(DEPS)
	$(CPP) -c -o $@ $< $(CFLAGS)

menu: $(OBJ)
	$(CPP) -o $@ $^ $(CFLAGS)
