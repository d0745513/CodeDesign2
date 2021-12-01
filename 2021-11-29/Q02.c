#include <stdio.h>

int main()
{
    char alph[27], op;
    int x;
    char *ptr = alph;
    scanf("%c", &op);
    if (op == 'a')
    {
        for (x = 0; x < 26; x++)
        {
            *ptr = x + 'a';
            ptr++;
        }
    }
    else
    {
        for (x = 0; x < 26; x++)
        {
            *ptr = x + 'A';
            ptr++;
        }
    }
    ptr = alph;
    for (x = 0; x < 26; x++)
    {
        printf("%c %p\n",*ptr,ptr);
        ptr++;
    }
    printf("\n");
}