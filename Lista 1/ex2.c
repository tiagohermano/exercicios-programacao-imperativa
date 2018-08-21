#include <stdio.h>
void main()
{
    int controle;
    scanf("%d", &controle);
    for(int index = 0;index < controle;index+=2)
    {
        printf("%d", index);
    };
}