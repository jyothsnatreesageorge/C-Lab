# include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Student.txt","w");

    char name[30];
    int age;
    float cgpa;

    printf("Enter the name of the student:");
    scanf("%s",name);
    printf("Enter the age of the student:");
    scanf("%d",&age);
    printf("Enterthe CGPA of the student:");
    scanf("%f",&cgpa);

    fprintf(fptr,"Printing the details entered\n");
    fprintf(fptr,"Name:%s\n",name);
    fprintf(fptr,"Age:%d\n",age);
    fprintf(fptr,"CGPA:%.3f\n",cgpa);
    fclose(fptr);
}