# include<stdio.h>
# include<math.h>
int square(int x);
float circle(int x);
float rectangle(int x,int y);
int main()
{
    float sqside,radius,length,breadth;
    printf("Enter the side of sqaure:");
    scanf("%f",&sqside);
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    printf("Enter the length and breadth of the rectangle:");
    scanf("%f %f",&length,&breadth);
    square(sqside);
    circle(radius);
    rectangle(length,breadth);
    return 0;
}
    
int square(int x)
{
    float area1=pow(x,2);
    printf("The area of the square is %.3f\n",area1);
    return area1;
}
float circle(int x)
{
    float area2=3.14*pow(x,2);
    printf("The area of thecircle is %.3f\n",area2);
    return area2;
}
float rectangle(int x,int y)
{
    float area3=x*y;
    printf("The area of the rectangle is %.3f\n",area3);
    return area3;
}