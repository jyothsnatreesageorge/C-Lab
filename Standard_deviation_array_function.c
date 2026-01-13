# include<stdio.h>
# include<math.h>
int mean(float a[10],int n)
{
    int i;
    float sum=0;
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    printf("The sum of all elements in the array is %.3f\n",sum);
    float avg=sum/n;
    printf("The mean of all elements in the array is %.3f\n",avg);
    return avg;
}
int stddev(int m,int avg,float a[10])
{
    float res=0,std_dev;
    int i;
    for(i=0;i<m;i++)
    {
        res=res+((avg-a[i])*(avg-a[i]));
    }
    printf("%f",res);
    std_dev=sqrt((res/m));
    printf("The standard deviation of elements in the array is %.3f\n",std_dev);
}
int main()
{
    int size,i;
    float arr[10];
    printf("Enter the elements in the array:");
    scanf("%d",&size);
    float r=mean(arr,size);
    stddev(size,r,arr);
}