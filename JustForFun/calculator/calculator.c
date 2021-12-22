// calculator.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//c语言实现命令行计算器
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
double Add(double num1,double num2) 
{
	
	double res = num1 + num2;
	printf("%.2f + %.2f = %.3f\n", num1, num2, res);
	return res;
}
double Subtraction(double num1, double num2)
{

	double res = num1 - num2;
	printf("%.2f - %.2f = %.3f\n", num1, num2, res);
	return res;

}
double Multiplication(double num1, double num2)
{

	double res = num1 * num2;
	printf("%.2f * %.2f = %.3f\n", num1, num2, res);
	return res;
}

double Division(double num1, double num2)
{

	double res = num1 / num2;
	printf("%.2f / %.2f = %.3f\n", num1, num2, res);
	return res;
}
int main()
{
	int operation = 0;
	double num1;
	double num2;
	printf("************************************************\n");
	printf("***************  Welcome ！！！ ****************\n");
	printf("************************************************\n");
	
	printf("\nplease input you operation :\n");
	printf("1.Add\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Quit\n");
	scanf("%d",&operation);
	if (operation == 5)
	{
		printf("**************程序退出***************");
		return 0;
	}
	printf("Please enter the data to be calculated :\n");
    scanf("%lf%lf", &num1, &num2);
	switch (operation)
	{
	case 1:
		Add(num1, num2);
		break;
	case 2:
		Subtraction(num1, num2);
		break;
	case 3:
		Multiplication(num1, num2);
		break;
	case 4:
		Division(num1, num2);
		break;
	default:
		printf("输入异常！！！");
		break;
	}
}

