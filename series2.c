//series 1+2/3!+3/5!.........
# include<stdio.h>
# include<math.h>
int fact(int n);
int main()
{
    int n;
    float i,sum=0.0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i/(fact((2*i)-1)));
    }
    printf("%.3f",sum);
    return 0;
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}