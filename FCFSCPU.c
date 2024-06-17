#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,bt[20],wt[20],avwt=0,i,j;
printf("Enter the number of processes(Maximum 20):");
scanf("%d",&n);
printf("\nEnter Process Burst Time:\n");
for(i=0;i<n;i++)
{
printf("p[%d]:",i+1);
scanf("%d",&bt[i]);
}

wt[0]=0;
for(i=1;i<n;i++)
{
wt[i]=0;
for(j=0;j<i;j++)
wt[i]=wt[i]+bt[j];
}
printf("\nProcess \t Burst Time \t Waiting Time ");
for(i=0;i<n;i++)
{ avwt=avwt+wt[i];
printf("\nP[%d]\t\t %d\t\t %d\t",i+1,bt[i],wt[i]);
}
avwt=avwt/i;
printf("\n\nAverage Waiting Time: %d\n\n",avwt);
return 0;
}