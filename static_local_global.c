#include <stdio.h>
static int series_num_global;
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
       printf("%d",func_local());
    }
    initialize(50);
    for(i = 0; i<10; i++)
    {
        printf("%d",func_global());
    }
    return 0;
}
int func_local()
{
    static int series_num = 10;
    series_num += 10;
    return series_num;
}
int initialize(int seed)
{
    series_num_global = seed;
    return 0;
}
int func_global()
{
    series_num_global += 20;
    return series_num_global;
}

