#include<stdio.h>  

int main(void)      //correct signature for main function
{
    int digit;  //instead of a
    int sum=0;  //instead of b
    int number; //instead of n

    printf("The armstrong numbers are-");

    for(number = 1; number <= 10000; number++)
    { 
        int temporary = number; 
        sum = 0;                 

        while(temporary > 0) 
        {
            digit = temporary % 10; 
            sum = sum + (digit * digit * digit); 
            temporary = temporary / 10;
        }

        if(sum == number)         
            printf("%d ",number); 
    } 

    return 0;
}