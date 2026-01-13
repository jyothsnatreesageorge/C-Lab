# include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Sample2.txt","r");
    if(fptr==NULL)
    {
        printf("File doenot exist");
    }
    else
    {
        char ch=fgetc(fptr);
        while(ch!=EOF)
        {
            printf("%c",ch);
            ch=fgetc(fptr);
        }
    }
    fclose(fptr);
}