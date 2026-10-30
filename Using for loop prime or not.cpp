//write a c program to check weather a no is prime or not first using while loop & then after for loop//
#include <stdio.h>
int main() {
int n;
printf("Enter a positive integer: ");
scanf("%d", &n);
if (n <= 1) {
printf("%d is NOT prime", n);
return 0;
}
for (int i = 2; i * i <= n; i++) {
if (n % i == 0) {
printf("%d is NOT prime", n);
break;
}
}
if (isPrime(n)) {
printf("%d is prime", n);
} else {
printf("%d is NOT prime", n);
}
return 0;
}
