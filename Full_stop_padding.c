#include <stdio.h>
#include <string.h>
void add_space(char *targ, char *src);
//This program adds full stop at the end of the sentence if there is room.
int main()
{
    char src[80];
    char s[80];
    int length;
    printf("Type a string of size < 80 characters: \n");
    gets(src);
    puts(src);

    length = strlen(src);
    while(length < 79)
    {
        src[length] = '.';
        length++;
        src[length] = '\0';
        printf("\n%s",src);
    }
    return 0;
}
