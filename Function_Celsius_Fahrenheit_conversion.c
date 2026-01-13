# include<stdio.h>
float convert(float n);
int main()
{
    float temp;
    printf("Enter the temperture to be converted into fahrenheit:");
    scanf("%f",&temp);
    printf("The converted temperature in fahrenheit is:%.3f",convert(temp));
}
float convert(float n)
{
    float f=0;
    return f=((9.0/5.0)*n)+32;
}

