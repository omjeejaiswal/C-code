#include <stdio.h>
#define N 200

struct bank
{
int acn;
    char name[20];
int bal;
};
int disp(struct bank *a)
{

    int k;

printf("\tCustomers whose balance is below 100:\n");
printf("\t*************************************\n\n");

    for (k = 0; k < 5; k++)
    {

        if ((a[k].bal) < 100)
        {

printf("%2d\t%s\n", a[k].acn, a[k].name);
        }
    }
    return 0;
}

int main()
{
    struct bank b[5];

int i, ch, lw = 100, ch2, ac, am;

    for (i = 0; i< 5; i++)
    {
printf("\tEnter information of customers \n");
printf("\t******************************\n\n");
printf("enter account no.: ");
scanf("%d", &b[i].acn);
printf("\n\nenter customer name: ");
scanf("%s", &b[i].name);

printf("\n\nenter balance: ");
scanf("%d", &b[i].bal);
    }

printf("\tEnter your choice\n");
printf("\t*****************\n\n");

printf("1: to know whose balance is below 100.\n\n");
printf("2: to process request or withdrawl.\n\n\n");

scanf("%d", &ch);

    switch (ch)
    {

    case 1:

disp(b);
        break;

    case 2:

printf("enter your account number: ");
scanf("%d", &ac);

        for (i = 0; i< 5; i++)
        {

            if ((b[i].acn) == ac)
            {

printf("\tHello %s\n", b[i].name);
printf("\n\n");

printf("\n\nenter your choice\n");
printf("\n1: deposite:\n");
printf("\n0: withdrawl:\n\n");
scanf("%d", &ch2);

                switch (ch2)
                {

                case 0:

                    if (b[i].bal< lw)
                    {

printf("\n\nsorry! account balance is too low for withdrawl.\n");

                        break;
                    }

                    else
                    {

printf("\n\nenter amount for withdrawl: ");
scanf("%d", &am);
                    }

                    if (b[i].bal< am)
                    {

printf("\n\nyou don't have enough balance for withdrawl.\n");
                    }

                    else
                    {

                        b[i].bal = b[i].bal + am;

printf("\n\nwithdrawl was successful.\n");
                    }
                    break;

                case 1:

printf("\n\nenter amount to deposite: ");
scanf("%d", &am);

                    b[i].bal = b[i].bal + am;

printf("\n\ncash deposited successfully.\n\n");

                    break;
                }
            }
        }
    }
}