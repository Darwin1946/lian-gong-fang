#include<stdio.h>
int main(void)
{
    int input;
    printf("input:");
    scanf("%d",&input);
    printf("dec=%d; octal=%o; hex=%x\n",input,input,input);
    printf("dec=%#d; octal=%#o; hex=%#x\n",input,input,input);
}