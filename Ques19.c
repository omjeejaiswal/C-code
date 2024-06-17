#include<stdio.h>
 int main(){
     int i=0, n,factorial=1;
     printf("Enter the number to Find Factorial: ");
     scanf("%d",&n);
     for(i=1; i<=n; i++){
         factorial *=i;
     }
     printf("the value of factorail %d is %d",n,factorial);
     return 0;
 }