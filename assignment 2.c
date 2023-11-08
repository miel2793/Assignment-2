#include<stdio.h>

int main()
{
    int a,b,*c,*d,sum=0;

    printf("1st Number is  : ");
    scanf("%d",&a);

    printf("2nd  Number is  : ");
    scanf("%d",&b);

    c=&a;
    d=&b;

    sum= *c + *d;

    printf("Sum is %d\n",sum);


}
