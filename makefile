CC=gcc
CPP=g++
CFLAGS=-I.

DEPS = submenu.h menu.h menuitem.h additem.h
OBJ =  menu.c menuitem.cpp main.c additem.cpp submenu.cpp

%.o: %.c $(DEPS)
	$(CPP) -c -o $@ $< $(CFLAGS)

menu: $(OBJ)
	$(CPP) -o $@ $^ $(CFLAGS)
