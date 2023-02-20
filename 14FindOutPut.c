#include<stdio.h>
int main()
{
    int x;
    x = 2;
        //<----------- Right to Left ----
    printf("%d %d %d", x*x , ++x, x++); //(Its make a stack to store the operatons and move from R to L)

    printf("%d ", x);
    return 0;
}