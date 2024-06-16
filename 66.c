#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct library
    {
int acn;
        char title[25];
        char auth[25];
        float price;
        int flag;
    };

    struct library a[5] = {
        {1, "Harry Potter", "J.k. Rowling", 500, 1},
        {2, "Random", "Randy Orton", 229, 0},
        {3, "Holy", "Nath", 1000, 0},
        {4, "Capital", "Williamson", 250, 1},
        {5, "Subtle", "R. Aggarwal", 399, 0}};

    struct library temp;

int i, ch, k, flag, j = 0;
    char author[10];

    while (1)
    {

printf("\t1: Add book information\n");
printf("\t2: Display book information\n");
printf("\t3: List all books of given author\n");
printf("\t4: List the title of specified book\n");
printf("\t5: List the count of books in the library\n");
printf("\t6: List the books in order of accesion number\n");
printf("\t7: Exit\n\n\n");

printf("Choice:   ");
scanf("%d", &ch);

        switch (ch)
        {

        case 1:

printf("\t\t1: Add book information:\n\n\n");

printf("enter book information:\n\n");

printf("Accesion number of book to be modified:  ");
scanf("%d", &j);
fflush(stdin);

            for (i = 0; i< 5; i++)
            {

                if (j == a[i].acn)
                {

printf("\n\nenter new information:\n\n");
printf("accesion no.: ");
scanf("%d", &temp.acn);
fflush(stdin);
printf("\n\ntitle: ");
scanf("%s", &temp.title);
fflush(stdin);
printf("\n\nauthor: ");
scanf("%s", &temp.auth);
fflush(stdin);
printf("\n\nprice: ");
scanf("%f", &temp.auth);
fflush(stdin);
printf("\n\nflag(1/0): ");
scanf("%d", &temp.flag);
fflush(stdin);
                }
            }

            a[j] = temp;

printf("\n\nInformation added succesfully!\n\n");

            break;

        case 2:

printf("\t\t2: Display book information:\n\n\n");

printf("Enter accesion number: ");
scanf("%d", &k);

            for (i = 0; i< 5; i++)
            {

                if (k == a[i].acn)
                {

printf("Book information: \n\n");
printf("\n\nAccesion Number: %d", a[i].acn);
printf("\nTitle: %s", a[i].title);
printf("\nAuthor: %s", a[i].auth);
printf("\nPrice: %f", a[i].price);

                    if (a[i].flag == 0)
                    {
printf("\nFlag: Not issued\n\n");
                    }
                    else
                    {
printf("\nFlag: Issued\n\n");
                    }
                }
            }

            break;

        case 3:

printf("\t\t3: List all books of given author:\n\n\n");

printf("Enter author name:  ");
scanf("%s", &author);
fflush(stdin);

printf("\n\nbooks of %s\n\n", author);
            for (i = 0; i< 5; i++)
            {

                k = strcmp(author, a[i].auth);

                if (k == 0)
                {
                    j = j + 1;
printf("%d.\t%s\n", j, a[i].title);
                }
            }

            break;

        case 4:

printf("\t\t4: Title of the specified book:\n\n\n");

printf("Enter the accesion number:  ");
scanf("%d", &k);

printf("\n\n");

            for (i = 0; i< 5; i++)
            {

                if (k == a[i].acn)
                {

printf("Title: %s\n", a[i].title);
                }
            }

            break;

        case 5:

printf("\t\t5: List the count of books in the library: \n\n\n");

            for (i = 0; i< 5; i++)
            {
                j = j + 1;
            }
printf("\tTotal books: %2d", j);

            break;

        case 6:

printf("6: List the books in order of accesion number: \n\n\n");

            for (i = 0; i< 5; i++)
            {

                for (j = i + 1; j < 4; j++)
                {

                    if (a[i].acn> a[j].acn)
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }

printf("Access no.\tTitle\tAuthor\tFlag\n\n\n");
            for (i = 0; i< 5; i++)
            {

printf("%4d\t\t%5s\t%5s\t", a[i].acn, a[i].title, a[i].auth);

                if (a[i].flag == 0)
printf("not issued\n\n");

                else
printf("issued\n\n");
            }

            break;

        case 7:

            exit(0);
        }
    }
}

int linkfloat()
{
    float a = 0, *b;
    b = &a;
    a = *b;
    return 0;
}
