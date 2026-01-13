# include<stdio.h>
void prime(int n);
int main()
{
    int i,j;
    int range,flag;
    printf("Enter the range until where prime numbers is to be printed:");
    scanf("%d",&range);
    prime(range);
    return 0;
}
void prime(int n)
{
    int i,j;
    for(i=2;i<n;i++)
    {
        int flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            flag++;
        }
        if(flag==0)
        printf("%d\t",i);
    }
    
}