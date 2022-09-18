#include "menu.h"
#include "menuitem.h"
#include "additem.h"
#include "submenu.h"
#include <stdio.h>
#include <cctype>
//#include <ncurses.h>

int main()
{
MenuItem *A = new ADDITEM('A',"Add Item");
MenuItem *B = new SubMenu('S',"Sub Menu");
MenuItem *C = new MenuItem('Q',"Quit");

Menu MyMenu;
MyMenu.AddItem(A);
MyMenu.AddItem(B);
MyMenu.AddItem(C);
MyMenu.doMenu();
//domenu();
return 1;
}

