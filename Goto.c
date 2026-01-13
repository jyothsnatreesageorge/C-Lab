#include <stdio.h> 
int main()
{
int n;
printf("Enter the value of n:"); 
scanf("%d",&n);
if(n % 2 ==0)
goto EVEN;
else
goto ODD;
EVEN:
    printf("\nEven");
    return 0;
ODD:
    printf("\nOdd");
    return 0;
}