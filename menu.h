#ifndef MENU_H
 #define MENU_H
#include "menuitem.h"
#include <list>
class Menu
{
private:
 std::list<MenuItem*> MenuItems;
 char MenuName[50];
public:
 Menu();
 void SetName(const char *Name);
 void AddItem(MenuItem *TheItem);
 int GetCount();
 void doMenu();
 void displayMenu();
};
 
#endif
