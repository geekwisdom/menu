#include "menu.h"
/*
#ifndef MENU_H
 #define MENU_H
#include "menuitem.h"
#include <list>
class Menu
{
private:
 std::list<MenuItem*> MenuItems;

public:
 Menu();
 void AddItem(MenuItem *TheItem);
 int GetCount();
 void doMenu();
 void displayMenu();
};
 
#endif

*/
Menu::Menu () { }

void Menu::AddItem(Menu *TheItem)
 {
 MenuItems.push_back(TheItem);
 }

int Menu::GetCount()
 {
 return MenuItem.size();
 }

void Menu::displayMenu()
{
}

void Menu::doMenu()
{
int quit=0;
while (quit ==0)
{
displaymenu();
fprintf(stdout,"\n\nEnter Choice: ");
fflush(stdout);
char choice=getc(stdin);
//char choice=_getch();
//fprintf(stdout,"Char is %i\n",choice);
for (MenuItem *m : MenuItems)
 {
 if (tolower(m->GetLetter()) == tolower(choice)) { quit=m->Run();  break; }
 }


}
