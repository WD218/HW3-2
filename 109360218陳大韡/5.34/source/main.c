#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x, y,z=1;
	printf("�п�J��ƤΫ���\n");
	scanf_s("%d%d", &x, &y);
	while (y >= 1)
	{
		y--;
		z =	z*x;

	}
	printf("%d", z);
}