# include<stdio.h>
struct student
{
    int roll;
    char name[30];
    float mark1;
    float mark2;
    float mark3;
    float total;
}s[50]/*,totalmark,totalstd*/;
int main()
{
    int n,i;
    float totalsub1=0,totalsub2=0,totalsub3=0;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the roll no of the student:");
        scanf("%d",&s[i].roll);
        printf("Enter the name of the student:");
        scanf("%s",s[i].name);
        printf("Enter the mark 1 of the student:");
        scanf("%f",&s[i].mark1);
        printf("Enter the mark 2 of the student:");
        scanf("%f",&s[i].mark2);
        printf("Enter the mark 3 of the student:");
        scanf("%f",&s[i].mark3);
    }
    for(i=0;i<n;i++)
    {
        float totalmark=s[i].mark1+s[i].mark2+s[i].mark3;
        printf("The total mark of student %d is %f\n",i+1,totalmark);
        printf("\n");
    }
    for(i=0;i<=3;i++)
    {
        totalsub1=totalsub1+s[i].mark1;
        totalsub2=totalsub2+s[i].mark2;
        totalsub3=totalsub3+s[i].mark3;
    }
    printf("The total mark of subject 1 is %f\nThe total mark of subject 2 is %f\nThe total mark of subject 3 is %f\n",totalsub1,totalsub2,totalsub3);
    printf("\n");
    return 0;
}