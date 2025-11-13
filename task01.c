#include <stdio.h>

// Function declarations:
void inputData(int arr[], int n);
float averagePatients(int arr[], int n);
int busiestDay(int arr[], int n);
int slowestDay(int arr[], int n);

int main() {
    int n = 7;  
    int patients[7];

    inputData(patients, n);

    float avg = averagePatients(patients, n);
    printf("\nAverage number of patients per day: %.2f\n", avg);

    int maxDay = busiestDay(patients, n);
    int minDay = slowestDay(patients, n);

    printf("Busiest day (maximum patients): Day %d with %d patients\n", maxDay + 1, patients[maxDay]);
    printf("Slowest day (minimum patients): Day %d with %d patients\n", minDay + 1, patients[minDay]);

    return 0;
}
void inputData(int arr[], int n) {
    printf("Enter total number of patients for each day:\n");
    for (int i = 0; i < n; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
float averagePatients(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}
int busiestDay(int arr[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }
    return maxIndex;
}
int slowestDay(int arr[], int n) {
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }
    return minIndex;
}
