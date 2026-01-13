# include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    int largest=a;
    if(b>largest)
    largest=b;
    if(c>largest)
    largest=c;
    printf("The largest of three numbers entered is %d",largest);
    return 0;
}