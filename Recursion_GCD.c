# include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
    return b;
    else if(b==0)
    return a;
    else if(a>b)
    return gcd(b,a%b);
    else if(b>a)
    return gcd(a,b%a);
}
int main()
{
    int n1,n2;
    printf("Enter two numbers to find gcd:");
    scanf("%d %d",&n1,&n2);
    gcd(n1,n2);
    printf("%d",gcd(n1,n2));
    return 0;
}