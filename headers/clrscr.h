#ifndef CLRSCR_H_INCLUDED
#define CLRSCR_H_INCLUDED

void clrscr(){
    system("cls");
}

/*
Tried this but didn't work out. Future me, if you ever learn about headers, do this. Stop being lazy.

#include <cstdlib>

void clrscr()
{
#ifdef WINDOWS
    std::system("cls");
#else
    // Assume POSIX
    std::system ("clear");
#endif
}*/
#endif // CLRSCR_H_INCLUDED
