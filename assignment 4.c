
#include<stdio.h>

int main()
{
    int a;

    printf("Enter Size:");
    scanf("%d",&a);

    int arr[a];

    int *pntr;

    pntr=arr;
    for(int i=0 ; i< a; i++)
    {
        scanf("%d",&pntr);

        pntr++;

    }
    pntr=arr;

    for(int i=0 ; i< a ; i++)
    {
        printf("%d ",*pntr);

        pntr++;

    }
}
