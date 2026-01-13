# include<stdio.h>
int main()
{
    FILE *fptr;
    char ch;
    fptr=fopen("Sample1.txt","r");
    if(fptr==NULL)
    {
        printf("File doesnit exist");
    }
    else
    {
        fscanf(fptr,"%c",&ch);
        printf("%c\t",ch);
    }
    fclose(fptr);
    return 0;
}