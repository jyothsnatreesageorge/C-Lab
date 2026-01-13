#include <stdio.h>

int main() {
    int n, i;
    int arr[50];
    int first, second;

    // Input size of array
    printf("Enter the number of elements in the array (max 50): ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second largest elements
    if (n < 2) {
        printf("Array size must be at least 2 to find second largest element.\n");
        return 0;
    }

    first = arr[0];
    second = arr[1];

    // Find first and second largest elements in the array
    for (i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    // Print the second largest element
    printf("The second largest element in the array is: %d\n", second);

    return 0;
}
