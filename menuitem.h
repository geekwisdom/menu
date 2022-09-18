#ifndef MENUITEM_H
 #define MENUITEM_H
class MenuItem
{
protected:
 char ItemName[255];
 char OptionLetter;

public:
 MenuItem (char _Letter, const char *_Name );
 virtual int Run();
 char *GetName();
 char GetLetter();
};
 
#endif
