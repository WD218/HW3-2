#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)
int main(void)
{
	char x;
	printf("��J�n�ഫ���r��\n");
	scanf("%c", &x);

	if ((x >= 'A') && (x <= 'Z'))
	{
		x =x+32;
		printf("�ഫ���G��:%c\n", x);
	}
	else if ((x >= 'a') && (x <= 'z'))
	{
		x =x- 32;
		printf("�ഫ���G��:%c\n", x);
	}
	system("pause");
	return 0;

}