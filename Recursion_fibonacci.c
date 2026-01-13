# include<stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",fibonacci(i));
    }
    return 0;
}
int fibonacci(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    else
    return fibonacci(n-2)+fibonacci(n-1);
}