#include "menu.h"
#include <stdio.h>
#include <string.h>
#include <cctype>

Menu::Menu () { strcpy (MenuName,"MAIN MENU");}

void Menu::SetName(const char *NewName)
{
strncpy (MenuName,NewName,49);
}

void Menu::AddItem(MenuItem *TheItem)
 {
 MenuItems.push_back(TheItem);
 }

int Menu::GetCount()
 {
 return MenuItems.size();
 }

void Menu::displayMenu()
{
fprintf(stdout,"\n\n *** %s ***\n=====================\n\n",MenuName);
for (MenuItem *A : MenuItems)
{
fprintf(stdout,"%c) %s\n",A->GetLetter(),A->GetName());
}

}

void Menu::doMenu()
{
int quit=0;
int foundone=0;
while (quit ==0)
{
displayMenu();
fprintf(stdout,"\n\nEnter Choice: ");
fflush(stdout);
char buf[80];
fgets(buf, sizeof(buf), stdin);
char choice=buf[0];
//char choice=_getch();
//fprintf(stdout,"Char is %i\n",choice);
foundone=0;
for (MenuItem *m : MenuItems)
 {
 if (tolower(m->GetLetter()) == tolower(choice)) { quit=m->Run(); foundone=1; break; }
 }
if (foundone == 0) { fprintf(stdout,"Invalid Option!\n"); }
}
return;
}
