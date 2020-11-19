#include <stdio.h> 
#include <stdlib.h> 
#pragma warning(disable : 4996)

int gcd(int m, int n);

int main(void)
{
	int x, y, r,z;
	printf("請輸入兩個數字\n");
	scanf("%d%d", &x, &y);
	r = gcd(x, y);
	z = (x*y) / r;
	printf("最小公因數為:%d\n", z);
	system("pause");
	return 0;
}
int gcd(int m, int n)
{
	while (n != 0)
	{
	int	t = m % n;
		m = n;
		n = t;
	}
	return m;
}