#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 10
#include<stdio.h>


int Add(int x，int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int a = 1;
	int b = 2;
	int c = Add(a, b);
}
//循环语句
//int main()
//{
//	int line = 0;
//	printf("学习C语言\n");
//
//	while (line<20000)
//	{
//		printf("桥一行代码\n");
//		line++;
//
//	}
//	printf("神功大成\n");
//	return 0;
//}

//选择语句
//int main()
//{
//	int coding = 0;
//	printf("学好C语言很容易嘛:");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("容易\n");
//	}
//	else
//	{
//		printf("不容易\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("%c\n",'\x61');
//	//char arr1[] = "abc";
//	//char arr2[] = { 'a','b','c'};
//	//
//
//	//printf("%d\n", strlen(arr1));//3
//	//printf("%d\n", strlen(arr2));//随机值
//	//printf("%s\n",arr1);
//	//printf("%s\n", arr2);
//}

//enum Sex
//{
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//int main()
//{
//	//const int num = 4;//常变量
//	//int arr[num] = { 0 };//错误
//	/*int arr[MAX] = { 0 };*/
//	
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//
//}