#include<stdio.h>
int main()
{
    int* p,a = 4;
    p = &a;
    printf("%d %d",p,a);

    int b[10];

    for(int i = 0; i < 10;i++)
    {
        *(b+i) = i;
    }

    for(int j = 0; j<10;j++)
    {
        printf("\n%d", *(b+j));
    }

    return 0;
}
