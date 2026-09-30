#include <stdio.h>

// Calculates the factorial of n iteratively
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter n (0 or greater): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        long long result = factorial(n);
        printf("%d! = %lld\n", n, result);
    }
    
    return 0;
}

