#include "gui.h"

void endgui(int fl)
{
getch();
FINref(stdscr,1,0);
if(fl==0) ant_hello("GAME OVER! YOU LOSE!", "Press any key to escape");
else ant_hello("YOU WIN!","Press any key to escape");
endwin();
}
