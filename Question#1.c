#include <stdio.h>

int main() {
    int arr[5];
    int i, last;

    // Input 5 integers
    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Store the last element
    last = arr[4];

    // Shift elements one position to the right
    for (i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Move last element to first position
    arr[0] = last;

    // Display the shifted array
    printf("Shifted array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

