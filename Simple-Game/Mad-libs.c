#include <stdio.h>

int main ()
{
    char color[5];
    char pl[10];
    char name[20];
    printf("Enter a color \t");
    scanf("%s",color);
    printf("Enter a pl \t");
    scanf("%s",pl);
    printf("Enter a name \t");
    scanf("%s",name);

printf("Roses are %s\n",color);
printf("%s are blue\n",pl );
printf("I love %s\n",name);

    return 0;
}