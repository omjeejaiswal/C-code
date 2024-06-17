#include<stdio.h>
 
int main()
{
      int limit, number, average, i , sum = 0;
      printf("\nEnter Total Number of Student :\t");
      scanf("%d", &limit);
      for(i = 0; i < limit; i++)
      {
            printf("Enter age of student %d\t::", i + 1);
            scanf("%d", &number);
            sum = sum + number;
      }
      average = sum / limit;
      printf("\nAverageAge student:\t%d\n", average);
      return 0;
}