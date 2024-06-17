#include <stdio.h>

int main(){
    int i,j,n,ref_str[50], frame[10] ,no,k,avail,fcount = 0;
    printf(" Enter the  no of the pages: \n");
    scanf("%d", &n);


    printf(" Enter the Pages no : \n");
    for(i = 1; i<=n; i++)
    scanf("%d",&ref_str[i]);

    printf(" Enter the no. of Frame: \n");
    scanf(" %d", &no);

    for( i= 0; i<=no;i++ )
    frame[i] = -1;
    j = 0;

    printf("ref_string   \t pageframes   \tHit/fault+\n ");

    for(i=1; i<=n; i++){
        printf("%d\t\t", ref_str[i]);
        avail = 0;

        for(k = 0; k<no; k++)
        if(frame[k] == ref_str[i]) 
        {
           avail = 1;
         for(k=0; k<no; k++)
         printf(" %d\t", frame[k]);
         printf("H");
        }
     
     if(avail == 0)
       {
           frame[j] = ref_str[i];
           j = (j+1)%no;
           fcount++;
           for(k = 0; k<no; k++)
           printf("%d\t", frame[k]);
           printf("F");
        }
        printf("\n");
    }   

    printf("Page Fault is %d", fcount);
    return 0;

}