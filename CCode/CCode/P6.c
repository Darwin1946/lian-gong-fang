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
//		printf("%d是偶数\n", a);
//	}
//	else
//	{
//		printf("%d是奇数\n", a);
//	}
//}
//
//int main()
//{
//	int a;
//	printf("输入需要判断的数值：\n");
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
//	//.操作符用于结构体变量取成员变量
//	struct Book book1 = {"C语言程序设计",55};
//	printf("书名：%s\n", book1.name);
//	printf("价格：%d\n", book1.price);
//	//->作符用于结构体指针取成员变量
//	struct Book* pb = &book1;
//	printf("书名：%s\n", pb->name);
//	printf("价格：%d\n", pb->price);
//
//	strcpy(book1.name, "C++");
//	printf("书名：%s\n", pb->name);
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
//	int* p = &a; //&是取地址符，获取变量的内存地址
//	printf("%p\n",p);  //int* 定义一个int类型的指针，64位系统站8个字节
//	*p = 20;   //在指针对象前加*为解引用符，获取该出的变量
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