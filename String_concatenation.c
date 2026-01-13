# include<stdio.h>
int main()
{
    char s1[30],s2[10];
    int length=0,i=0;
    printf("Enter first string:");
    scanf("%s",s1);
    printf("Enter second string:");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++)
    {
        length++;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        s1[length]=s2[i];
        length++;
    }
    s1[length]='\0';
    printf("%s",s1);
    return 0;
}