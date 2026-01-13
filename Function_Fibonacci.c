# include<stdio.h>
void fibonacci(int n);
int main()
{
    int range;
    printf("Enter the range till where the Fibonacci series is to be displayed:");
    scanf("%d",&range);
    fibonacci(range);
}
void fibonacci(int n)
{
    int a=0;
    int b=1;
    printf("%d\t%d",a,b);
    for(int i=2;i<n;i++)
    {
        int c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
}
