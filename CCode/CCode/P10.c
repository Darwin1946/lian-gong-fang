#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
int test1(int n)
{

	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d�Ľ׳�Ϊ��%d\n", n,sum);
	return sum;

}
void test2() 
{
	int n = 0;
	printf("�������n:\n");
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum+=test1(i);
	}
	printf("�����Ϊ��%d",sum);
}

void test3()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int r = sz;
	int l = 0;
	int mid = 0;
	while (l < r) 
	{
		mid = l + (r - l) / 2;
		if (arr[mid]==k)
		{
			printf("�ҵ��ˣ�%d���±�Ϊ%d",k,mid);
			return 0;
		}
		else if (arr[mid]<k)
		{
			l = mid + 1;
			continue;
		}
		r = mid;
	
	}
	printf("�Ҳ�����\n");
	return 0;
}

void test4()
{
	char ch1[] = {"Welcome my friends!!!!!"};
	char ch2[] = {"#######################"};
	int l = 0;
	int r = strlen(ch1)-1;
	while (r >= l)
	{
		ch2[l] = ch1[l];
		ch2[r] = ch1[r];
		printf("%s\n",ch2);
		Sleep(1000);
		system("cls");
		l++;
		r--;
	}
	printf("%s\n",ch2);

}

int test5()
{
	char ch[20] = { 0 };
	for (int i = 0; i < 3; i++) {
		printf("���������룺");
		scanf("%s", &ch);
		if (strcmp(ch, "123456") == 0)
		{
			printf("������ȷ��");
			return 0;
		}
	}
	printf("������������ʧ�ܣ����һ����룡");
	return 0;
}

int main()
{
	/*test1();*/
	/*test2();*/
	/*test3();*/
	/*test4();*/
	test5();
	return 0;

}