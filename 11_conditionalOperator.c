// 11 Find output
#include<stdio.h>
int max(int a, int b)
{
    a>b?return(a):return(b); --> ERROR

    return a>b?a:b; ---> CORRECT
}

main()
{
    int x = 3, y = 4;
    printf("Greater number is: %d", max(x,y));
}