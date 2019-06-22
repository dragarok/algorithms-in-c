#include <stdio.h>
// int TC, a, b;
// scanf("%d", &TC);
// while (TC--){
//     scanf("%d %d", &a, &b);
//     printf("%d\n", a + b);
// }

int main() 
{
    int a, b;
    // stop when both integers are 0
    while( scanf("%d %d", &a, &b), (a || b) )
    {
        /* code */
        printf("%d\n", a + b);
    }
  
}
