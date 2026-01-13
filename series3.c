# include<stdio.h>
int fact(int n);
int main()
{
    int i,range;
    float sum=0.0;
    printf("Enter range:");
    scanf("%d",&range);
    for(i=1;i<=range;i++)
    {
        sum=sum+(1.0/fact(i));
    }
    printf("%.3f",sum);
    return 0;
}
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}