#include <stdio.h>

void hello(i)
{
    if (i == 11)
    {
        return;
    }
    printf("%d\n", i);
    hello(i+1);
}

int main()
{
    int i = 1;
    hello(i);

    return 0;
}