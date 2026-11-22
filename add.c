#include<stdio.h>
int main()
{
    int a, b, sum=0, sub=0, mul=1, div=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    printf("Addition of the numbers is: %d\n", sum);
    printf("Subtraction of the numbers is: %d\n", sub);
    printf("Multiplication of the numbers is: %d\n", mul);
    printf("Division of the numbers is: %d\n",div);
    return 0;
}