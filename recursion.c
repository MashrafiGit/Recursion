#include <stdio.h>

void hello()  // recurses function
{
    printf("Hello\n");
    hello();
}
// and the whole process is recursion
// call stack overflow: when recursion reach the call stack limit, then call stack got overflow and automatic turn off 


int main()
{
    printf("Hi\n");

    hello();

    return 0;
}