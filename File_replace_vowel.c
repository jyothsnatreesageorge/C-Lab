# include<stdio.h>
int main()
{
    FILE *fptr1,*fptr2;
    char ch;
    fptr1=fopen("Sample10.txt","r");
    fptr2=fopen("Sample11.txt","w");
    if(fptr1==NULL)
    {
        printf("Error in opening the file!");
    }
    else
    {
        while(fscanf(fptr1,"%c",&ch)!=EOF)
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {
                fprintf(fptr2,"x");
            }
            else
            {
                fprintf(fptr2,"%c",ch);
            }
        }
    }
    fclose(fptr1);
    fclose(fptr2);
}