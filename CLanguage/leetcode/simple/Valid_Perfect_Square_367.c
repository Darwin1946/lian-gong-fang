#include<stdio.h>
#include <stdbool.h>

bool isPerfectSquare(int num);
int main(void){
int num;
printf("input: ");
scanf("%d",&num);
bool res = isPerfectSquare(num);
printf("%d\n",res);
scanf("%d",&res);
}
bool isPerfectSquare(int num){
for (int i = 0; i <= num; i++)
{
    /* code */
     int a = i*i;
     printf("%d\n",a);
     if (a==num)
     {
         return true;
     }
     if (a>num)
     {
         return false;
     }
     
     
}
return false;
}
