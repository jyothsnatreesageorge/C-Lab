#include <stdio.h>

int main()
{
    int n, rem, a[30], i = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    // Convert decimal to binary
    while (n > 0)
    {
        rem = n % 2;
        a[i] = rem;
        n = n / 2;
        i++;
    }

    // Print the binary digits in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
    printf("\n");

    return 0;
}
