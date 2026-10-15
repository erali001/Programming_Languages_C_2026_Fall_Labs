#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    // asking elements numbers
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    // creating dynamic memory
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // input numbers
    printf("Enter %d integers: ", n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr); // if error clear memory
            return 1;
        }
        sum += arr[i];
    }

    // calculating average
    float average = (float)sum / n;

    // printing results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    // clearing memory
    free(arr);

    return 0;
}