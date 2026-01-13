# include<stdio.h>
int factorial(int n);
int main()
{
    int number,result;
    printf("Enter the number:");
    scanf("%d",&number);
    //result=factorial(number);
    printf("The factorial of the number is %d",factorial(number));
}
int factorial(int n)
{
    if(n==0)
    return 1;
    else
    {
        return n*factorial(n-1);
    }

}
