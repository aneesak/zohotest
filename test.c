#include <stdio.h>
#include <string.h>
int main()
{
    int length, index, space, i, j;
    char str[20];
    printf("Enter the string: ");
    scanf("%s", str);
    length = strlen(str);
    for (i = 0; i < length; i++)
    {
        index = strlen(str) / 2;
        for (space = 1; space <= length - i; space++)
            printf(" ");
        for (j = 0; j <= i; j++)
        {
            if(index >= length)
            index = 0;
            printf("%c", str[index]);
            index++;
        }
        printf("\n");
    }
    return 0;
}
