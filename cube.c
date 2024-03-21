// 1
#include <stdio.h>
void cube(int a)
{

    int c = a * a * a;
    printf("%d", c);
}
int main()
{

    cube(3);

    return 0;
}
__________________________________________________________________________________________________________________
// 2
#include <stdio.h>
int div(int a)
{
    // int c;
    if (a % 3 == 0 && a % 5 == 0)
    {
        printf("it is divisible by 3&5");
    }
    else
    {
        printf("it is not div");
    }
}
int main()
{
    div(10);

    return 0;
}
