#include<stdio.h>
struct complex_no
{
    float rpart;
    float ipart;
}c1,c2;
void sum()
{
    struct complex_no c3;
    c3.rpart=c1.rpart+c2.rpart;
    c3.ipart=c1.ipart+c2.ipart;
    printf("%.3f.%.3fi",c3.rpart,c3.ipart);
}
int main()
{
    printf("Enter the complex numbers:");
    scanf("%f %f %f %f",&c1.rpart,&c1.ipart,&c2.rpart,&c2.ipart);
    sum();
    return 0;
}