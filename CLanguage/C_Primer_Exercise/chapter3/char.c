#include<stdio.h>
int main(void)
{
    char A = 65;
    printf("ASCII:%d\nchar:%c\n",A,A);
    int ch;
 
   for( ch = 75 ; ch <= 100; ch++ ) {
      printf("ASCII = %d, char = %c\n", ch , ch );
   }

   char B = 'ASDC';
   printf("ASCII:%d\nchar:%c\n",B,B);

   char bell = 7;
   printf("bell:%c\n",bell);
   printf("bell:\a\n");
}