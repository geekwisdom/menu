#ifndef MENU_H
 #define MENU_H
class MenuItem
{
private:
 char ItemName[255];
 char OptionLetter;

public:
 MenuItem(char _Letter, const char *_Name );
 char *GetName();
 char GetLetter();
};
 
#endif
