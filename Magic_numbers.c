#include <stdio.h>
#include <stdlib.h>
int main()
{
    int magic,guess;
    magic = rand();
    printf("Guess the magic number:");
    scanf("%d",&guess);
    if (guess == magic)
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
        printf("\nThe correct number is %d",magic);
    }
    return 0;
}
