#include "gui.h"


void render(int **my, int **op, int fl )
{
int i,j;
 for(i=0;i<10;i++)
    for(j=0;j<10;j++) {
	if(fl==1) { 
        wbkgdset(op_win[i][j],COLOR_PAIR(op[i][j]));
        wclear(op_win[i][j]);
	wborder(op_win[i][j],ACS_VLINE,ACS_VLINE,ACS_HLINE,ACS_HLINE,ACS_ULCORNER,ACS_URCORNER,ACS_LLCORNER,ACS_LRCORNER);
        wnoutrefresh(op_win[i][j]);
	
	wbkgdset(my_win[i][j],COLOR_PAIR(my[i][j]));
	wclear(my_win[i][j]);
	wborder(my_win[i][j],ACS_VLINE,ACS_VLINE,ACS_HLINE,ACS_HLINE,ACS_ULCORNER,ACS_URCORNER,ACS_LLCORNER,ACS_LRCORNER);
	wnoutrefresh(my_win[i][j]);
	}
	
	if(fl==0) {
	wbkgdset(my_win[i][j],COLOR_PAIR(my[i][j]));
        wclear(my_win[i][j]);
	 wborder(my_win[i][j],ACS_VLINE,ACS_VLINE,ACS_HLINE,ACS_HLINE,ACS_ULCORNER,ACS_URCORNER,ACS_LLCORNER,ACS_LRCORNER);
        wnoutrefresh(my_win[i][j]);
	 }
	
	if(fl==2) {
	wbkgdset(op_win[i][j],COLOR_PAIR(op[i][j]));
        wclear(op_win[i][j]);
	 wborder(op_win[i][j],ACS_VLINE,ACS_VLINE,ACS_HLINE,ACS_HLINE,ACS_ULCORNER,ACS_URCORNER,ACS_LLCORNER,ACS_LRCORNER);
        wnoutrefresh(op_win[i][j]);
	}
    }
	
wmove(chat,1,2);
doupdate();	
}
