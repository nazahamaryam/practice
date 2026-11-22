#include<stdio.h>
int main()
{
    int r, l, b, h, arear=1;
    float areac=1, areat=1;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    areac=3.14*r*r;
    printf("Area of the circle is: %.2f\n",areac);
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d",&l,&b);
    arear=l*b;
    printf("Area of the rectangle is: %d\n",arear);
    printf("Enter the base and height of the triangle: ");
    scanf("%d %d",&b,&h);
    areat=0.5*b*h;
    printf("Area of the triangle is: %.2f\n",areat);
    return 0;
}