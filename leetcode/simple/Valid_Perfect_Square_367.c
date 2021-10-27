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
// 1,4,9,16,25...等差数列？
if (num==0)
{
    /* code */
    return true;
}

for (int i = 0; i <= num; i++)
{
    //1
    //1+3
    //1+3+5
    int add = 2*i+1;
    num-=add; 
    if (num == 0)
    {
        return true;
    }
    
}

return false;

}
