#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Round robin scheduling Algorithm
struct node
{
char PN[3];
int BT;
int AT;
int CT;
int TAT;
int WT;
int RT;
}

pro[11];
struct GANTT
{
char NAME[3];
int START;
int END;
}
HELPER[100];
//ready queue

int queue[100];
int front=-1;
int rear=-1;
void insert(int n)
{
if(front==-1)
{
front=0;
}
rear=rear+1;
queue[rear]=n;
}

int delete()
{
int num;
num=queue[front];
front=front+1;
return num;
}

void arrange(struct node Pro[],int n)
{int i,j;
struct node temp;
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(Pro[i].AT>Pro[j].AT)
{
temp=Pro[i];
pro[i]=pro[j];
Pro[j]=temp;
}
}
}
}

void table(struct node pro[],int n, int temp_BT[])
{
int i;
printf("*******TABLE********\n");
printf("\n");
printf("Process\tBT\tAT\tCT\tWT\tTAT\tRT\n");
for(i=0;i<n;i++)
{
printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n", pro[i].PN, temp_BT[i],pro[i].AT, pro[i].CT, pro[i].WT,
pro[i].TAT, pro[i].RT);
}
printf("\n");
printf("\n");
}
void gantt_chart(int j)
{
int i;
printf("*******Gantt Chart*******\n");
for(i=0;i<j;i++)
{
printf("| %s ",HELPER[i].NAME);
}
printf(" | ");
printf("\n");

for(i=0;i<j;i++)
{
printf(" %2dto%2d ",HELPER[i].START, HELPER[i].END);
}
}
int main()
{
int i,n,QT,current_time=0,index,j=0,prev_time=0;
int temp_BT[10];
int exist[10]={0,0,0,0,0,0,0,0,0,0};
float AVG_CT=0,AVG_TAT=0,AVG_WT=0,AVG_RT=0;
printf("enter the number of process MAX 10\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the name of %dth process\n",i+1);
scanf("%s",pro[i].PN);

printf("enter the BT of %dth process\n",i+1);
scanf("%d",&pro[i].BT);

printf("enter the AT of %dth process\n",i+1);
scanf("%d",&pro[i].AT);

}
printf("enter the value of time quantum\n");
scanf("%d",&QT);
//sort with increasing order of arrival time arrange(pro, n);
for(i=0;i<n;i++)
{
temp_BT[i]=pro[i].BT;
}
insert(0);
exist[0]=1;
while(front<=rear)
{
prev_time=current_time;
index=delete();
if(pro[index].BT>=QT)
{
if(pro[index].BT==temp_BT[index])
{
pro[index].RT=current_time;
}
pro[index].BT=pro[index].BT-QT;
current_time=current_time+QT;

}
else
{
if(pro[index].BT==temp_BT[index])
{
pro[index].RT=current_time;
}
current_time=current_time+pro[index].BT;
pro[index].BT=0;
}
if(index!=10)
{
strcpy(HELPER[j].NAME, pro[index].PN);
HELPER[j].START=prev_time;
HELPER[j].END=current_time;
j++;
}
for(i=0;i<n;i++)
{
if(exist[i]==0 && pro[i].AT<=current_time)
{
insert(i);
exist[i]=1;
}
}

if(pro[index].BT==0)
{
pro[index].CT=current_time;
pro[index].TAT=current_time-pro[index].AT;
pro[index].WT=pro[index].TAT-temp_BT[index];
pro[index].RT=pro[index].RT-pro[index].AT;
}
else
{
insert(index);
}
}
table(pro,n,temp_BT);
printf("\n");
gantt_chart(j);
printf("\n");
for(i=0;i<n;i++)
{
AVG_CT=AVG_CT+pro[i].CT;
AVG_TAT=AVG_TAT+pro[i].TAT;
AVG_WT=AVG_WT+pro[i].WT;
AVG_RT=AVG_RT+pro[i].RT;
}
AVG_CT=AVG_CT/n;
AVG_TAT=AVG_TAT/n;

AVG_WT=AVG_WT/n;
AVG_RT=AVG_RT/n;
printf("the average completion time = %f\n",AVG_CT);
printf("the average turn around time = %f\n",AVG_TAT);
printf("the average waiting time = %f\n",AVG_WT);
printf("the average response time = %f\n",AVG_RT);
return 0;
}