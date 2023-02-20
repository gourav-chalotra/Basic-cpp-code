// Topic Delimiter by default(1. Space ,2. Tab ,3. Enter)

// #include <stdio.h>
// int main()
// {
//     int x, y, z;
//     scanf("%d/%d/%d", &x, &y, &z);

//     printf("%d %d %d", x, y, z);

//     return 0;
// }
#include <stdio.h>
int main() 
{ 
    char a = 'A';
    char b = 'B'; 
    int c = a + b % 3 - 3 * 2; 
    printf("%d\n", c); 
}