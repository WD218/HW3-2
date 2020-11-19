#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)
int main(void)
{
	char x;
	printf("輸入要轉換的字母\n");
	scanf("%c", &x);

	if ((x >= 'A') && (x <= 'Z'))
	{
		x =x+32;
		printf("轉換結果為:%c\n", x);
	}
	else if ((x >= 'a') && (x <= 'z'))
	{
		x =x- 32;
		printf("轉換結果為:%c\n", x);
	}
	system("pause");
	return 0;

}