# include<stdio.h>
int main()
{
    int n,i,a[30],key;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the key to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Element is found at %d position",a[i]);
            break;
        }
        
    }
    if(i==n)
    {
        a[i]=key;
    }
    for(i=0;i<n+1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}