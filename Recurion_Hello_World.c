# include<stdio.h>
void hello(int n);
int main()
{
    int count;
    printf("Enter the number of times:");
    scanf("%d",&count);
    hello(count);
    return 0;
}
void hello(int n)
{
    if(n>0)
    {
    printf("Hello World!\n");
    hello(n-1);
    }
}