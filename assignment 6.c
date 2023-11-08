
#include <stdio.h>

int main()
{

    FILE *mm;

    mm=fopen("5miel.txt","r");

    char out[600];
    fscanf(mm , "%[^\n]",out);
    printf("%s\n",out);
    mm=fclose(mm);


}
