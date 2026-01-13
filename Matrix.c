# include<stdio.h>
int main()
{
    int m,n,i,j,a[10][10];
    printf("Enter the number of rows of the matrix:");
    scanf("%d",&m);
    printf("Enter the number of columns of the matrix:");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the element of row %d and colmumn %d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Printing the Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}