#include <stdio.h> 
#include <stdlib.h> 
#pragma warning(disable : 4996)

int gcd(int m, int n);

int main(void)
{
	int x, y, r,z;
	printf("�п�J��ӼƦr\n");
	scanf("%d%d", &x, &y);
	r = gcd(x, y);
	z = (x*y) / r;
	printf("�̤p���]�Ƭ�:%d\n", z);
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