# include<stdio.h>
# include<string.h>
# include<ctype.h>
int main()
{
    char a[100];
    int n=0,i,v=0,c=0;
    printf("Enter the string:");
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    strlwr(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            v++;
        }
        else if(isalpha(a[i]))
        {
            c++;
        }
    }
    printf("The number of vowels is %d\nThe number of consonants is %d",v,c);
    return 0;
}