#ifndef SUBMENU_H
 #define SUBMENU_H
#include <stdio.h>
#include "menuitem.h"
class SubMenu:public MenuItem
{
public:
 SubMenu(char A, const char *B): MenuItem(A,B) { } 
 int Run();
};
 
#endif
