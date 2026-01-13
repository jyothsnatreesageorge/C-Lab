# include<stdio.h>
int main()
{
    int n,ld,fd,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    ld=n%10;
    while(n>=10)
    n=n/10;
    fd=n;
    sum=sum+fd+ld;
    printf("%d",sum);
    return 0;
}