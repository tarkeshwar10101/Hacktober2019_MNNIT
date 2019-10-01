#include <stdio.h>
in main(
{
    int number, i
    printf("Enter a positive integer: ")
    scanf("d",&umber)
    printf("Factors of %d are: ", number)
    for(i=1; i <= number; ++i)
    {
        if (number%i = 0)
        {
            printf("%d ",i)
        }
    }
    return 0
}