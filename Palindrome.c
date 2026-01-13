# include<stdio.h>
int main()
{
    char s[20];
    int i,length=0,flag=0;
    printf("Enter the string:");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        length++;
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=s[length-i-1])
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    printf("It is a palindrome");
    else
    printf("It is not a palindrome");
    return 0;
}