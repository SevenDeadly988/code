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










//
//int main()	   //变量num1 + 变量num2 = 变量num0
//{
//  	int num1 = 0; //变量num1
//	int num2 = 0; //变量num2
//	long long num0 = 0;	 //变量num3
//	scanf("%d%d",&num1,&num2);//输入数据-使用输入函数scanf   &取地址符号
//	num1 + num2;
//	num0= num1 + num2;
////	printf("num0 = %d\n", num0);  //打印num0 = 整数num0
////
////	return 0;
////}
//  int main()
//  {
//	  int a = (int)3.14;
//	  printf("%d\n",a);
////
////	return 0;
////
////  }
//int main()
//{
//	int a = 3 == 4;
//	printf("%d\n",a);
//	return 0;
//}

