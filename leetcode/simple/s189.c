#include<stdio.h>
int main(void)
{
    int nums[10]={0,1,2,3,4,5,6,7,8,9};
    nums[0]=1;
    nums[1]=2;
    nums[2]=3;
    printf("%d",nums[0]);
}

void rotate(int* nums, int numsSize, int k){
    int mv = k%numsSize;
    int cache = 0;
    
    
    
}