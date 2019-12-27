#include <stdio.h>
#include <string.h>

int main()
{

    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    if (strcmp(s1,s2)) //String compare
    {
        printf("Not equal\n");
    }
    else
        printf("They are equal\n");

    strcat(s1,s2);// String concatenate
    printf("%s\n",s1);
    strrev(s1);//String reverse
    printf("%s\n",s1);

    return 0;
}
