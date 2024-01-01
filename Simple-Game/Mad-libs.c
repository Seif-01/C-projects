#include <stdio.h>

int main ()
{
    char color[5];
    char pl[10];
    char name[20];
    printf("Enter any color but blue: \t");
    scanf("%s",color);
    printf("Enter a plural name that have color blue: \t");
    scanf("%s",pl);
    printf("Enter a name someone you love: \t");
    scanf("%s",name);

printf("Roses are %s\n",color);
printf("%s are blue\n",pl );
printf("I love %s\n",name);

    return 0;
}