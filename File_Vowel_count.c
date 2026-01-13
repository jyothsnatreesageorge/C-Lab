# include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Sample8.txt","r");
    char ch;
    int count=0;
    while(fscanf(fptr,"%c",&ch)!=EOF)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            count++;
        }
    }
    printf("The number of vowels in the given text is %d",count);
    fclose(fptr);
    return 0;
}