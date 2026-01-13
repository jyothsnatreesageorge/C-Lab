# include<stdio.h>
struct person
{
    int id;
    char name[30];
    struct details
    {
        char date[20];
        char address[30];
    }employee;
    
}p1;
int main()
{
    printf("Enter ID:");
    scanf("%d",&p1.id);
    printf("Enter the name:");
    scanf("%s",p1.name);
    printf("Enter date of joining:");
    scanf("%s",p1.employee.date);
    printf("Enter the address:");
    scanf("%s",p1.employee.address);
    printf("Printing the details...................\n");
    printf("The employee ID is %d\nThe employee name is %s\nThe joining date is %s\nThe Address of the employee is %s",p1.id,p1.name,p1.employee.date,p1.employee.address);
    return 0;
}