# include<stdio.h>
int main()
{
    char a[20];
    printf("Enter the string:");
    scanf("%s",a);
    int i;
    int length=0;
    for(i=0;a[i]!='\0';i++)
    {
        length=length+1;
    }
    for(i=length-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}