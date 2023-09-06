//wap to print the prime number between given interval using fumction;

#include <stdio.h>
int is_prime(int num);
int main() {
    int start, end,i;
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are: ", start, end);

    for ( i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
	return 0;
}
int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
	for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
	return 1;
}

