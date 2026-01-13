# include<stdio.h>
float percent(float a,float b,float c);
int main()
{
    float math,sci,sans;
    printf("Enter the marks in Maths,Science and Sanskrit:");
    scanf("%f %f %f",&math,&sci,&sans);
    printf("The total percentage obtained by the student in these three subjects is %.3f",percent(math,sci,sans));
    return 0;
}
float percent(float a,float b,float c)
{
    float total=0.0;
    float percentage;
    total=a+b+c;
    return percentage=(total/3);
}