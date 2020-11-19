#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x=0;
	int y = 1;
	while (y>0)
	{printf("%d     %d    ",x,y);
		x = x + y;
		y = x + y;
		
	}
	system("pause");
	return 0;
}