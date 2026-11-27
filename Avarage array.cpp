#include <stdio.h>

int main() {
    int n;
    printf("Enter how many numbers you want to average: ");
    scanf("%d", &n);

    float arr[n], sum = 0;

    printf("Enter %d numbers:
", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    float average = sum / n;
    printf("Average = %.2f
", average);

    return 0;
}