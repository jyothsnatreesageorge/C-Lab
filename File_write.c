# include<stdio.h>
# include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Sample1.txt","w");
    char ch[]="Banana";     //Dont specify size let compiler decide the size of the string so that it is correctly null terminated and wont incurr any garbage values
    if(fptr==NULL)
    {
        printf("Error in opening the file!");
        exit(-1);
    }
    else
    {
        fprintf(fptr,"%s",ch);
    }
    fclose(fptr);
    return 0;
}