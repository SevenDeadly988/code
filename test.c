#define _CRT_SECURE_NO_WARNINGS 1	//ʹscanf�����滻scanf_s�ľ���ʧЧ  scanf_s����C���Ե�ͨ�ú���

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
//int main()	   //����num1 + ����num2 = ����num0
//{
//  	int num1 = 0; //����num1
//	int num2 = 0; //����num2
//	long long num0 = 0;	 //����num3
//	scanf("%d%d",&num1,&num2);//��������-ʹ�����뺯��scanf   &ȡ��ַ����
//	num1 + num2;
//	num0= num1 + num2;
////	printf("num0 = %d\n", num0);  //��ӡnum0 = ����num0
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

