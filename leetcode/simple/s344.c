#include<stdio.h>
#include<stdbool.h>
int main()
{

}

void reverseString(char* s,int sSize)
{
    int l=0;
    int r=sSize-1;
    char temp;
    while (l<r)
    {
        temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        r -=1;
        l +=1;
    }
}

