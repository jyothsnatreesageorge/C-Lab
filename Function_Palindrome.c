# include<stdio.h>
# include<string.h>
void reverse(char a[10])
{
    int i,n,flag=0;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a plaindrome");
    }
}
int main()
{
    char x[10];
    printf("Enter the string:");
    scanf("%s",&x);
    reverse(x);
    return 0;
}