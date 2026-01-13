/*Write a program to create a structure employee with member variables name, 
age, bs, da, hra and tsalary. Total Salary is calculated by the equation tsalary= 
(1+da+hra)* bs. Read the values of an employee and display it.*/
# include<stdio.h>
struct employee
{
    char name[10];
    int age;
    float bs;
    float da;
    float hra;
    float tsalary;
}e;
int main()
{
    printf("Enter the name:");
    scanf("%s",e.name);
    printf("Enter age:");
    scanf("%d",&e.age);
    printf("Enter bs:");
    scanf("%f",&e.bs);
    printf("Enter da:");
    scanf("%f",&e.da);
    printf("Enter hra:");
    scanf("%f",&e.hra);
    e.tsalary=(1+e.da+e.hra)*e.bs;
    printf("Printing the details of the employee\n");
    printf("Name:%s\nAge:%d\nBase Salary:%.3f\nDA;%.3f\nHRA:%.3f\nTotal Salary:%.3f\n",e.name,e.age,e.bs,e.da,e.hra,e.tsalary);
    return 0;
}