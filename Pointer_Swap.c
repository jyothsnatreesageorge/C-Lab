# include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before swapping:\na=%d\tb=%d\n",a,b);
    int *x,*y;
    x=&a;
    y=&b;
    swap(&a,&b);
    return 0;
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("After Swapping:\na=%d\tb=%d",*a,*b);
}