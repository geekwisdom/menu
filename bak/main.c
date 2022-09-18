#include "menu.h"
#include <stdio.h>
#include <cctype>
//#include <ncurses.h>
int Count;

void doadd()
{
fprintf(stdout,"Inside Add...\n");
}

void doedit()
{
fprintf(stdout,"Inside Edit...\n");
}

void dodelete()
{
fprintf(stdout,"Inside Delete...\n");
}


buildmenu(MenuItem **Items, int *Count)
{
Items[0] = new MenuItem('A',"Add Item");
Items[1] = new MenuItem('E',"Edit Item");
Items[2] = new MenuItem('D',"Delete Item");
Items[3] = new MenuItem('Q',"Quit");
*Count = 4;
return 1;
}

void displaymenu()
{
fprintf(stdout,"\n\n *** MAIN MENU ***\n=====================\n\n");
MenuItem *Menu[4];
buildmenu(Menu,&Count);
for (int i=0;i<Count;i++)
{
fprintf(stdout,"%c) %s\n",Menu[i]->GetLetter(),Menu[i]->GetName());
}
}

void domenu()
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
switch (toupper(choice))
 {
 case 'A': doadd();break;
 case 'E': doedit();break;
 case 'D': dodelete();break;
 case 'Q': quit=1;break;
 case 10: break;
 case 13: break;
 default: fprintf(stdout,"Invalid choice\n"); break;
 }
}
return;
}


int main()
{
domenu();
return 1;
}

