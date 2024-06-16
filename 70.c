#include<stdio.h>
int  main()
{
FILE *f1,*f2;
char c;
printf("Data Input in file first \n to stop press ^z \n");
f1=fopen("First","w");
while((c=getchar())!=EOF)
putc(c,f1);
fclose(f1);
f1=fopen("First","r");
printf("\n\nOrignnal sentence  \n\n");
while((c=getc(f1))!=EOF)
{
printf("%c",c);
}
fclose(f1);
f2=fopen("SECOND ","w");
f1=fopen("First","r");
printf("\nSentance without spaces  \n\n");
while((c=getc(f1))!=EOF)
{
if((c!=' '))
fputc(c,f2);
}

fclose(f1);
fclose(f2);
f2=fopen("SECOND ","r");
while((c=getc(f2))!=EOF)
{
printf("%c",c);
 }
fclose(f2);
return 0;
}