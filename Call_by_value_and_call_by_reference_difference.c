#include<stdio.h>
int main()
{
    int n=4;
    printf("%p\n",&n);
    print(n);
    printf("%p\n",&n);
    print1(&n);
}
void print(int n)
{
    printf("%p\n\n",&n);
}
//The outputs are different due to call by value effect. When called by value,a copy of the variable is made at a different location which changes its address.
void print1(int *n)
{
    printf("%p\n\n",n);
}
//The outputs are same due to call by refernce effect. It is directly accessed from the address.