#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


int main()
{
	char ch;
  while ((ch=getchar())!= EOF)//EOF==ctrl+z
{
	putchar(ch);
}

}

//void jishu(int a)
//{
//	if (a % 2 == 0)
//	{
//		printf("%d��ż��\n", a);
//	}
//	else
//	{
//		printf("%d������\n", a);
//	}
//}
//
//int main()
//{
//	int a;
//	printf("������Ҫ�жϵ���ֵ��\n");
//	scanf("%d", &a);
//	jishu(a);
//
//	for (int i = 0; i < 100; i++)
//	{
//		jishu(i);
//	}
//
//}
//struct Book
//{
//	char name[20];
//	int price;
//
//};

//int main()
//{
//	//.���������ڽṹ�����ȡ��Ա����
//	struct Book book1 = {"C���Գ������",55};
//	printf("������%s\n", book1.name);
//	printf("�۸�%d\n", book1.price);
//	//->�������ڽṹ��ָ��ȡ��Ա����
//	struct Book* pb = &book1;
//	printf("������%s\n", pb->name);
//	printf("�۸�%d\n", pb->price);
//
//	strcpy(book1.name, "C++");
//	printf("������%s\n", pb->name);
//
//}

//int main()
//{
//char a = 'a';
//char* ch = &a;
//printf("ch %c\n", *ch);
//
//}
//int main()
//{
//	int a = 10;
//	int* p = &a; //&��ȡ��ַ������ȡ�������ڴ��ַ
//	printf("%p\n",p);  //int* ����һ��int���͵�ָ�룬64λϵͳվ8���ֽ�
//	*p = 20;   //��ָ�����ǰ��*Ϊ�����÷�����ȡ�ó��ı���
//	printf("%d\n", a);
//	printf("%d", sizeof(p));
//}

//#define MAX(X,Y) (X>Y?X:Y)

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = MAX(a, b);
//	printf("MAX %d",c);
//}
//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}