#include <string.h>
#include <stdio.h>
#include "submenu.h"
#include "additem.h"
#include "menu.h"
int SubMenu::Run()
{
MenuItem *A = new ADDITEM('A',"Add Item");
MenuItem *B = new MenuItem('Q',"Quit");
Menu MyMenu;
MyMenu.SetName("SUB MENU");
MyMenu.AddItem(A);
MyMenu.AddItem(B);
MyMenu.doMenu();
return 0;
}
