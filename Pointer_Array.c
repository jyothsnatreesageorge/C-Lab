# include<stdio.h>
//# include<malloc.h>
int main()
{
    int a[30];
    int i,n,*p;
    printf("Enter the size of array:");
    scanf("%d",&n);
    p=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        //p++;
    }
    printf("Array Content:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",p[i]);
    }
    return 0;
}