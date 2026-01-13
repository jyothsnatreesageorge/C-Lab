# include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Sample4.txt","r");
    if(fptr==NULL)
    {
        printf("Error in opening the file");
    }
    else
    {
        int n;
        fscanf(fptr,"%d",&n);
        printf("%d",n);
        fscanf(fptr,"%d",&n);
        printf("%d",n);
        fscanf(fptr,"%d",&n);
        printf("%d",n);
        fscanf(fptr,"%d",&n);
        printf("%d",n);
        fscanf(fptr,"%d",&n);
        printf("%d",n);
    }
    fclose(fptr);
}