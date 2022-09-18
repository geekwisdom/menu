#include <string.h>
#include <stdio.h>
#include "menuitem.h"


MenuItem::MenuItem(char _Letter,const char *_Name)
{
strcpy(ItemName,_Name);
OptionLetter = _Letter;
}

char * MenuItem::GetName ()
{
return ItemName;
}

char MenuItem::GetLetter()
{
return OptionLetter;
}

int MenuItem::Run()
{
return 1;
}

