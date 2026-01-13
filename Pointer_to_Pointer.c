# include<stdio.h>
int main()
{
    int n=5;
    int *ptr=&n;
    int **pptr=&ptr;
    printf("n=%d\nptr=%d\npptr=%d\nn=%d\nn=%d\n",n,ptr,pptr,*ptr,**pptr);
    return 0;
}