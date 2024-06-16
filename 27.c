#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
    if (a == b)
    {
        return a;
    }

    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    if (a > b)
    {
        return gcd(a - b, b);
    }

    return gcd(a, b - a);
}

int lcd(int a , int b){

return a*b/gcd(a,b);

}

int main()
{
int a,b;
scanf("%d %d",&a,&b);
printf("gcd %d", gcd(a, b));
printf("\nlcd %d", lcd(a, b));


    return 0;
}