#include <stdio.h>

void hello(i)
{
    if (i == 11)
    {
        return;
    }
    hello(i+1);
    printf("%d\n", i);
}

int main()
{
    int i = 1;
    hello(i);

    return 0;
}