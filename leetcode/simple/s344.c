#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[10] = "Hello\0";
    printf("%s\n",a);
    reverseString(a,5);
    printf("%s\n",a);
    scanf("%s",a);
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

