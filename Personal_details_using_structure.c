# include<stdio.h>
struct personal
{
    char name[50];
    char date[10];
    int salary;
}p[50];
void input(int n)
{
    int i;
    for(i=0;i<n;i++)
    {    
        printf("Enter the name of the individual:");
        scanf("%s",p[i].name);
        printf("Enter the date of joining:");
        scanf("%s",p[i].date);
        printf("Enter the salary:");
        scanf("%d",&p[i].salary);
    }
}
void display(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Name:%s\n",p[i].name);
        printf("Date of joining:%s\n",p[i].date);
        printf("Salary:%d\n",p[i].salary);
        printf("\n");
    }
}
int main()
{
    int size;
    printf("Enter the number of indiviuals:");
    scanf("%d",&size);
    input(size);
    display(size);
}