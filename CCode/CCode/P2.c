#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()//������
{
	//char ch = 'a';
	//printf("%c\n", ch);//��ӡ�ַ�%c

	//int age = 20;
	//printf("%d\n", age);//��ӡ����%d
	//return 0;

	//printf("%d\n",sizeof(char));      //1  
	//printf("%d\n", sizeof(int));      //4
	//printf("%d\n", sizeof(short));    //2
	//printf("%d\n", sizeof(long));     //4
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(float));    //4
	//printf("%d\n", sizeof(double));   //8

	//float f = 95.6;
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d",&num1,&num2);
	int sum = num1 + num2;
	printf("%d",sum);
	return 0;
}