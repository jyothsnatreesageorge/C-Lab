# include<stdio.h>
int main()
{
    int a,b;
    FILE *fptr;
    fptr=fopen("Sample5.txt","r");
    if(fptr==NULL)
    {
        printf("Error in opening the file!");
    }
    else
    {
        fscanf(fptr,"%d",&a);
        fscanf(fptr,"%d",&b);
    }
    fclose(fptr);
    printf("Printing the value of a and b\na=%d\nb=%d\n",a,b);
    int c=a+b;
    fptr=fopen("Sample5.txt","w");
    if(fptr==NULL)
    {
        printf("Error in opening the file!");
    }
    else
    {
        fprintf(fptr,"The sum of the two numbers a=%d and b=%d is %d",a,b,c);
    }
    fclose(fptr);
}