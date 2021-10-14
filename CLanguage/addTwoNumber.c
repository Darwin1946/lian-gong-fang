#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    printf("input two num(split according to space):");
 
    scanf("%d %d", &firstNumber, &secondNumber);
 
    sumOfTwoNumbers = firstNumber + secondNumber;
 
    printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);
 
    return 0;
}
