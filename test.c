#define _CRT_SECURE_NO_WARNINGS 1	//使scanf函数替换scanf_s的警告失效  scanf_s不是C语言的通用函数

#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d",&a,&b);
	c = Add(a, b);
	printf("%d\n",c);
	return 0;
}
