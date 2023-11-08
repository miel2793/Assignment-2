
#include <stdio.h>

int main()
{
    FILE *mm;

    mm= fopen("My_File_value.txt","a");

    int p;

    printf("Enter Number:");
    scanf("%d",&p);
    fprintf(mm,"%d\n",p);

    printf("Values are Appended");




}
