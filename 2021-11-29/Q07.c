#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    char * s1 = str1;
    char * s2 = str2;

    scanf(" %[^\n]\n", str1);
    scanf(" %[^\n]", str2);

    /* Move till the end of str1 */
    while(*(++s1));

    /* Copy str2 to str1 */
    while((*(s1++) = *(s2++)));

    printf("%s\n", str1);
}