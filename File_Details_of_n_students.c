# include<stdio.h>
int main()
{
    FILE *fptr;
    char name[30],course[30];
    float marks,cgpa;
    int i,n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    fptr=fopen("Student1.txt","w");
    for(i=0;i<n;i++)
    {
        printf("Enter the name of the student:");
        scanf("%s",name);
        printf("Enter the course of the student:");
        scanf("%s",course);
        printf("Enter the marks of the student:");
        scanf("%f",&marks);
        printf("Enter the CGPA of the student:");
        scanf("%f",&cgpa);
        fprintf(fptr,"Student %d\n",i+1);
        fprintf(fptr,"Name:%s\t",name);
        fprintf(fptr,"Course:%s\t",course);
        fprintf(fptr,"Marks:%.3f\t",marks);
        fprintf(fptr,"CGPA:%.3f\n",cgpa);
    }
    
    /*for(i=0;i<n;i++)
    {
        fprintf(fptr,"Student %d\n",i+1);
        fprintf(fptr,"Name:%s\t",name);
        fprintf(fptr,"Course:%s\t",course);
        fprintf(fptr,"Marks:%.3f\t",marks);
        fprintf(fptr,"CGPA:%.3f\n",cgpa);
    }*/
    fclose(fptr);
}