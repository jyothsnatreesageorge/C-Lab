//Pointer Sum
/*# include<stdio.h>
int sum(int *x,int *y);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum(&a,&b);
    return 0;
}
int sum(int*x,int *y)
{
    printf("The sum of %d and %d is %d",*x,*y,*x+*y);
    return *x+*y;
}*/

//Pointer swap
/*# include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before Swapping\na=%d\tb=%d\n",a,b);
    swap(&a,&b);
    return 0;
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("After swapping\na=%d\tb=%d\n",*x,*y);
}*/

//Read and display array
/*# include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter the number of elements of array:");
    scanf("%d",&n);
    readarr(a,n);
    disparr(a,n);
    return 0;
}
void readarr(int *x,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1); 
        scanf("%d",x);
        x++;
    }
}
void disparr(int *x,int n)
{
    int i;
    printf("The array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*x);
        x++;
    }
}*/

//Sort using pointer
# include<stdio.h>
int main()
{
    int a[10],n,i,j;
    int (*p);
    printf("Enter the number of elements of array:");
    scanf("%d",&n);
    p=a;
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1); 
        scanf("%d",p+i);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                int temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
    return 0;
}