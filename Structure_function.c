# include<stdio.h>
struct item
{
    char name[10];
    float price;
    int quantity;
    float total;
};
void read(struct item *s);
void print(struct item s);
void read(struct item *s)
{
    printf("Enter item name:");
    scanf("%s",s->name);
    printf("Enter item price:");
    scanf("%f",&s->price);
    printf("Enter item quantity:");
    scanf("%d",&s->quantity);
}
void print(struct item s)
{
    printf("Printing the details:\n");
    printf("Name:%s\nPrice:%.3f\nQuantity:%d\n",s.name,s.price,s.quantity);
    s.total=s.price*s.quantity;
    printf("Total:%.3f",s.total);
}
int main()
{
    struct item i1;
    read(&i1);
    print(i1);
}