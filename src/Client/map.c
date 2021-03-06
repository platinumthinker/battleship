#include "client.h"

void map_init()
{
	SMAP=(int**)calloc(SIZE,sizeof(int*));
	EMAP=(int**)calloc(SIZE,sizeof(int*));
	for (int i=0;i<SIZE;i++)
	{
		SMAP[i]=(int*)calloc(SIZE,sizeof(int));
		EMAP[i]=(int*)calloc(SIZE,sizeof(int));
		for(int j = 0; j < SIZE; j++)
		{
			EMAP[i][j] = CELL_NONE;
			SMAP[i][j] = CELL_NONE;
		}
	}
}

void map_deinit()
{
	for (int i=0;i<SIZE;i++)
	{
		free(SMAP[i]);
		free(EMAP[i]);
	}
	free(SMAP);
	free(EMAP);
}
