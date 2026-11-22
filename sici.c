#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,n;
    float r,si=1,a=1,ci=0;
    printf("Enter principle, roi and time period: ");
    scanf("%d%f%d", &p, &r, &t);
    si= (p*r*t)/100;
    printf("Simple Interest is: %.2f\n",si);
    printf("Enter the principal amount, rate of interest, time period and number of times interest is compounded per year: ");
    scanf("%d%f%d%d", &p, &r, &t, &n);
    a= p*pow((1+(r/(n*100))),n*t);
    ci= a - p;
    printf("Compound Interest is: %.2f\n",ci);
    return 0;
}