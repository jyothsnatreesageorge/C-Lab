//Function to print prime numbers upto a range
/*# include<stdio.h>
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
    
}*/

//Factorial using recursion
/*# include<stdio.h>
int fact(int x);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The factorial is:%d",fact(n));
    return 0;
}
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}*/

//Recursive function to print fibonacci series
/*#include<stdio.h>
int fib(int n)
{
if(n == 1)
return 0;
else if(n == 2)
return 1;
return fib(n-2)+fib(n-1);
}
void main()
{
int n,i;
printf("Enter the limit:");
scanf("%d",&n);
for(i=1;i<=n;i++)
printf("%d\t",fib(i));
}*/