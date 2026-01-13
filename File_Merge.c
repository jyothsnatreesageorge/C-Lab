# include<stdio.h>
int main()
{
    FILE *fptr1,*fptr2;
    fptr1=fopen("Sample7.txt","r");
    fptr2=fopen("Sample6.txt","a");
    if(fptr1==NULL)
    {
        printf("Error in opening the file!");
    }
    else
    {
        char ch;
        while(fscanf(fptr1,"%c",&ch)!=EOF)
        fprintf(fptr2,"%c",ch);
    }
    fclose(fptr1);
    fclose(fptr2);
    fptr2=fopen("Sample6.txt","r");
    if(fptr2==NULL)
    {
        printf("Error in opening the file");
    }
    else
    {
        char ch;
        while(fscanf(fptr2,"%c",&ch)!=EOF)
        printf("%c",ch);
    }
    fclose(fptr2);
    return 0;
}