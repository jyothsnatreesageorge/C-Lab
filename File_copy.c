# include<stdio.h>
int main()
{
    FILE *fptr1,*fptr2;
    char ch;
    fptr1=fopen("Sample8.txt","r");
    fptr2=fopen("Sample9.txt","w");
    if(fptr1==NULL)
    {
        printf("Error in opening the file!");
    }
    /*else
    {*/
        while(fscanf(fptr1,"%c",&ch)!=EOF)
        {
            fprintf(fptr2,"%c",ch);
        } 
    //}
    fclose(fptr1);
    fclose(fptr2);
    fptr2=fopen("Sample9.txt","r");
    if(fptr2==NULL)
    {
        printf("Error in opening the file!");
    }
    else
    {
        while(fscanf(fptr2,"%c",&ch)!=EOF)
        {
            printf("%c",ch);
        }
    }
    fclose(fptr2);
    return 0;
}