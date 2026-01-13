#include <stdio.h>

struct item
{
    char name[10];
    float price;
    int quantity;
    float total;
};

void read(struct item s);
void print(struct item s);

void read(struct item s)
{
    printf("Enter item name: ");
    scanf("%s", s.name);
    printf("Enter item price: ");
    scanf("%f", &s.price);
    printf("Enter item quantity: ");
    scanf("%d", &s.quantity);

    // Compute the total inside the read function
    s.total = s.price * s.quantity;
    
    // Call print from inside read to keep the flow
    print(s);
}

void print(struct item s)
{
    printf("Printing the details:\n");
    printf("Name: %s\n", s.name);
    printf("Price: %.3f\n", s.price);
    printf("Quantity: %d\n", s.quantity);
    printf("Total: %.3f\n", s.total);
}

int main()
{
    struct item i1;

    read(i1);
    return 0;
}
