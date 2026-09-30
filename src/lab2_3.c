 #include <stdio.h>

// Returns 1 if n is prime, 0 otherwise
int is_prime(int n) {
    if (n < 2) {
        return 0; 
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Error: No prime numbers less than 2.\n");
    } else {
        printf("Prime numbers up to %d: ", n);
        
        for (int i = 2; i <= n; i++) {
            if (is_prime(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    
    return 0;
}
