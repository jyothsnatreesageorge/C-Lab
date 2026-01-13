# include<stdio.h>
int main()
{
    int n,temp,rem,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+fact(rem);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number");
    }
    return 0;
}
int fact(int n);
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}