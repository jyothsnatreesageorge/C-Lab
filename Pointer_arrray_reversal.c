# include<stdio.h>
void reverse(int *x,int n);
int main()
{
    int n,i,a[20];
    int *p;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    p=a;
    reverse(a,n);
    return 0;
}
void reverse(int *x,int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",*(x+i));
    }
}