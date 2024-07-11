#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N (1 ≤ N ≤ 500): ");
    scanf("%d", &N);

    if (N < 1 || N > 500) {
        printf("N must be between 1 and 500.\n");
        return 1;
    }

    int count = 0;

    for (int A = 1; A <= 500; A++) {
        for (int B = 1; B <= A; B++) {
            if (A * A - B * B == N) {
                count++;
            }
        }
    }

    printf("Number of pairs (A, B) where A^2 - B^2 = %d: %d\n", N, count);

    return 0;
}

