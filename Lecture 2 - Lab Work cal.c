#include <stdio.h>
int sum(int a, int b)
{
    int c;
    c = a + b;
    printf(" sum = %d\n", c);
}
int sub(int a, int b)
{
    int c;
    c = a - b;
    printf(" sub = %d\n", c);
}
int mul(int a, int b)
{
    int c;
    c = a * b;
    printf(" mul = %d\n", c);
}
int div(int a, int b)
{
    int c;
    c = a / b;
    printf(" div = %d\n", c);
}
int main()
{
    int ch;
    int a, b;
    // printf("Enter first number");
    // scanf("%d",&a);
    // printf("Enter secound number");
    // scanf("%d",&b);

    while (1)
    {
        printf("Enter first number");
        scanf("%d", &a);
        printf("Enter secound number");
        scanf("%d", &b);
        printf("1.sum\n2.sub\n3.mul\n4.div\n5.end\n");
        printf("Enter your choices");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            sum(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mul(a, b);
            break;
        case 4:
            div(a, b);
            break;
        case 5:
            return 0;
        default:
            printf("Invalide");
        }
    }
}
