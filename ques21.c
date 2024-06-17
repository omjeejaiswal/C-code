#include<stdio.h>
#include<conio.h>
int main()
{
    int i, num, count_p=0, count_n=0, count_z=0;
    int arr[100];
    //size of array
    printf("Enter Numbers: ");
    scanf("%d", &num);

    //take input from user for "num" numbers

    for(i=0;i<num;i++)
    {
        scanf("%d", &arr[i]);
    }

    //count the numbers
    for(i=0;i<num;i++)
    {
        //check for positive numbers
        if(arr[i]>0)
        {
            count_p++;
        }
        else if(arr[i]<0)
        {
            count_n++;
        }
        else if(arr[i]==0)
        {
            count_z++;
        }
        else
        {
            printf("Wrong Entry");
            break;
        }
    }
    printf("Positive Numbers: %d\n", count_p);
    printf("Negative Numbers: %d\n", count_n);
    printf("Zero Numbers: %d\n", count_z);
}