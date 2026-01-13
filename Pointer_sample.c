# include<stdio.h>
int main()
{
    int a[10];
    int*p[10];
    for(int i=0; i<10; i++)
    {
        p[i] = &a[i];
        printf("Enter element %d: ", i+1);
        scanf("%d", p[i]);
        printf("%d\n", a[i]);
    }
}