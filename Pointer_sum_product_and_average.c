#include<stdio.h>
float sum(float *x, float *y);
float product(float *x, float *y);
float average(float *x, float *y);
int main()
{
    float a,b;
    printf("Enter the two numbers:");
    scanf("%f %f",&a,&b);
    sum(&a,&b);
    product(&a,&b);
    printf("The sum is %.3f\nThe product is %.3f\n",sum(&a,&b),product(&a,&b));
    average(&a,&b);
    printf("The average of the two values entered is %.3f\n",average(&a,&b));
}
float sum(float *x,float *y)
{
    return *x+*y;
}
float product(float *x,float *y)
{
    return *x * *y;
}
float average(float *x,float *y)
{
    return (*x+*y)/2;
}