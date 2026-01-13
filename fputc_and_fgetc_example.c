# include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Sample3.txt","w");
    if(fptr==NULL)
    {
        printf("Error in opening the file");
    }
    else
    {
        fputc('A',fptr);
        fputc('P',fptr);
        fputc('P',fptr);
        fputc('L',fptr);
        fputc('E',fptr);
    }
    fclose(fptr);
    fptr=fopen("Sample3.txt","r");
    if(fptr==NULL)
    {
        printf("Error in opening the file");
    }
    else
    {
        char ch=fgetc(fptr);
        printf("%c\t",ch);
        ch=fgetc(fptr);
        printf("%c\t",ch);
        ch=fgetc(fptr);
        printf("%c\t",ch);
        ch=fgetc(fptr);
        printf("%c\t",ch);
        ch=fgetc(fptr);
        printf("%c\t",ch);
    }
    fclose(fptr);
}