#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
       printf("%d",func());
    }
    return 0;
}
int func()
{
    static int series_num = 10;
    series_num += 10;
    return series_num;
}

