#include<stdio.h>
int search(int* nums, int numsSize, int target);

int main(void){
int nums[5] = {1,2,3,4,5};
int size = 5;
int target = 5;
int res = search(nums,size,target);
printf("%d",res);
}


int search(int* nums, int numsSize, int target)
{
    int l= 0 ;
    int r = numsSize;

    while (l<r)
    {
        int m = l + (r - l) / 2;
        if (nums[m]==target)
        {
            return m;
        }
        else if (nums[m]>target)
        {
            r = m;
        }
        else{
            l = m+1;
        }
    }
    return -1;

}