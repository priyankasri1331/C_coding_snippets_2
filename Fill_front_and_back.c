#include <stdio.h>
#include <string.h>
// This function fills the array src front and end at the same time.
void converge(char *targ, char *src);
int main()
{
    char src[80];
    int k;
    char targ[80];
    printf("Type  a string of size < 80 characters: \n");
    gets(src);
    for(k = 0; k < strlen(src); k++)
    {
        targ[k] = 'X';
    }
    //printf("%d %d\n",strlen(src),strlen(targ));
    converge(targ, src);
    //a = gets();
    return 0;
}
void converge(char *targ, char *src)
{
    int i,j;
    for (i = 0,j=strlen(src)-1;i<=j;i++,j--)
    {
        //printf("%d %d",i,j);
        //printf("%c %c\n",src[i],src[j-1]);
        targ[i] = src[i];
        targ[j] = src[j];
        printf("%s\n",targ);
    }
}
