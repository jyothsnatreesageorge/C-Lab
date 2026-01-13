# include<stdio.h>
int add(int n);
int main()
{
    int range,result;
    printf("Enter the range till where the sum of natural numbers is to be printed:");
    scanf("%d",&range);
    add(range);
    result=add(range);
    printf("The sum of desired numbers is %d",result);
    return 0;
}
int add(int n)
{
    if(n>0)
    {
        return n+add(n-1);
    }
}
