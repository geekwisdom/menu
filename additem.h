#ifndef ADDITEM_H
 #define ADDITEM_H
#include <stdio.h>
#include "menuitem.h"
class ADDITEM:public MenuItem
{
public:
 ADDITEM(char A, const char *B): MenuItem(A,B) { } 
 int Run();
};
 
#endif
