#include <stdio.h>
int f[100];
int fib(int n);
int fib_memoize(int n);
int main()
{
    int n,i,k,a=0,b=1,x,y;
    printf("Enter n:");
    scanf("%d",&n);

    if (n==0)
        k = 0;
    if (n==1)
        k = 1;

    for(i = 1; i < n; i++)
    {
        k = a + b;
        a = b;
        b = k;
    }
    printf("\nIn iter approach: %d",k);

    x = fib(n);
    printf("\nIn recursive approach: %d",x);
    y = fib_memoize(n);
    printf("\nIn memoize approach: %d",y);

    return 0;
}
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int u1 = fib(n - 1);
    int u2 = fib(n - 2);
    //printf("\n%d %d %d",u1,u2,u1 + u2);

    return u1 + u2;

}
int fib_memoize(int n)
{

    if (n==0)
    {
        f[0] = 0;
        return 0;
    }
    if (n==1)
    {
        f[1] = 1;
        return 1;
    }

    if (f[n] != 0)
    {
        return f[n];
    }
    else
        f[n] = fib_memoize(n-1) + fib_memoize(n-2);
    return f[n];
}

