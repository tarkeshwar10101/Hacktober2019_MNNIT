#include <stdio.h>
int min()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    prntf("Enter two integers: ");
    
    scanf("%d %d", firstNumber, &secondNumber);
    
    sumOfTwoNumbers = firstNumber+secondNumber;
    
    printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);
    return 0;
}