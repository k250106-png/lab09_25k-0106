#include <stdio.h>
float calculateBonus(int salary) {
    if (salary < 30000)
        return salary * 0.20;  
    else
        return salary * 0.10;  
}

int main() {
    int salary[5];
    float totalPayout = 0;
    printf("Enter salaries of 5 employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d salary: ", i + 1);
        scanf("%d", &salary[i]);
    }
    for (int i = 0; i < 5; i++) {
        float bonus = calculateBonus(salary[i]);
        printf("Employee %d Bonus: %.2f\n", i + 1, bonus);
        totalPayout += salary[i] + bonus;
    }
    printf("\nTotal Payout: %.2f\n", totalPayout);

    return 0;
}
