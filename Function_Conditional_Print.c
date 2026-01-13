# include<stdio.h>
void print(char a);
int main()
{
    char a;
    printf("Enter I for Indian and F for French:");
    scanf("%c",&a);
    print(a);
    return 0;
}
void print(char a)
{
    if(a=='I'||a=='i')
    {
        printf("Namaste!");
    }
    else if(a=='F'||a=='f')
    {
        printf("Bonjour!");
    }
    else
    {
        printf("Invalid Input");
    }

}