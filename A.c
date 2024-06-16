#include<stdio.h>
int main(){
   int a[50],i,num,large,small;
   printf("Enter the number of elements :");
   scanf("%d",&num);
   printf("Input the array elements :\n");
   for(i=0;i<num;++i)
      scanf("%d",&a[i]);
   large=small=a[0];
   for(i=1;i<num;++i){
      if(a[i]>large)
         large=a[i];
      if(a[i]<small)
         small=a[i];
   }
   printf("small= %d\n",small);
   printf("large= %d\n",large);
   return 0;
}