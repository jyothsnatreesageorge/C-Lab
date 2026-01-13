# include<stdio.h>
# include<math.h>
float square(int a);
int main()
{
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    square(x);
    //printf("%f",sq);
    return 0;
}
float square(int a)
{
    float sq=pow(a,2);
    printf("%.2f",sq);
    return sq;
}