#include<stdio.h>

int main()
{
    FILE *mm;

    mm=fopen("5miel.txt","w");

    char miel[600];

    fgets(miel,600,stdin);

    fprintf(mm,"%s",miel);
    mm=fclose(mm);
}
