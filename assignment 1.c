#include <stdio.h>

int main()
{

    int n;
    printf("Enter a number:");
    scanf("%d",&n);



    int *pntr;

    pntr=&n;

    printf("value of the number is %d\n",*pntr);
}
