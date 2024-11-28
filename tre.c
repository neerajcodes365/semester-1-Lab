#include <stdio.h>

// Function to find the sum of elements in an array
int arraySum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
   // int size = sizeof(numbers) / sizeof(numbers[0]);

    int result = arraySum(numbers, 5);

    printf("Sum: %d\n", result);

    return 0;
}
