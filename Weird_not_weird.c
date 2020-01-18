#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d %d %d\n",(!(n%2)), (n>=6), (n<=20));
    if (n%2 || (!(n%2) && n>=6 && n<=20))
    {
        printf("Weird");
    }
    else
    {
        printf("Not Weird");
    }

    return 0;
}
