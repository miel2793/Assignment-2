#include <stdio.h>

int main()
{
    int a,b,*c,*d,t;

    printf("First Number : ");
    scanf("%d",&a);

    printf("Second Number : ");
    scanf("%d",&b);

    c=&a;
    d=&b;

    t=*c;

    a=*d;
    b=t;



    printf("First Number : %d\n",a);


    printf("Second Number : %d\n",b);



}
