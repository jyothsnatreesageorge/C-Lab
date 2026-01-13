#include <stdio.h>

struct item
{
    char name[10];
    float price;
    int quantity;
    float total;
};

void read(struct item s[], int n);
void print(struct item s[], int n);

void read(struct item s[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Enter item name: ");
        scanf("%s", s[i].name);
        printf("Enter item price: ");
        scanf("%f", &s[i].price);
        printf("Enter item quantity: ");
        scanf("%d", &s[i].quantity);
    }
}

void print(struct item s[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        s[i].total = s[i].price * s[i].quantity;
        printf("Printing the details of item %d:\n", i + 1);
        printf("Name: %s\nPrice: %.3f\nQuantity: %d\nTotal: %.3f\n", s[i].name, s[i].price, s[i].quantity, s[i].total);
    }
}

int main()
{
    int n;
    struct item i[20]; // Declare the array within main

    printf("Enter the number of items: ");
    scanf("%d", &n);

    read(i, n);
    print(i, n);

    return 0;
}
