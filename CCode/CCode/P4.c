#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 10
#include<stdio.h>


int Add(int x��int y)
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
//ѭ�����
//int main()
//{
//	int line = 0;
//	printf("ѧϰC����\n");
//
//	while (line<20000)
//	{
//		printf("��һ�д���\n");
//		line++;
//
//	}
//	printf("�񹦴��\n");
//	return 0;
//}

//ѡ�����
//int main()
//{
//	int coding = 0;
//	printf("ѧ��C���Ժ�������:");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
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
//	//printf("%d\n", strlen(arr2));//���ֵ
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
//	//const int num = 4;//������
//	//int arr[num] = { 0 };//����
//	/*int arr[MAX] = { 0 };*/
//	
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//
//}