# include<stdio.h>
int sum(int *x,int *y);
int sum(int *x,int *y)
{
    printf("Sum is %d",*x+*y);
    return *x+*y;
}
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum(&a,&b);
    return 0;
}