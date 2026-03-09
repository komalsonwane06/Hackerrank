#include <stdio.h>

int main() {
    int age, income, risk;
    if (scanf("%d %d %d", &age, &income, &risk) != 3) return 0;

    if (age < 30) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if (age >= 30 && age <= 50) {
        if (income > 75000 && risk == 3) {
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        }
        else if (income <= 75000 && risk == 2) {
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        }
        else if (income > 75000 && (risk == 1 || risk == 2)) {
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        }
        else if (income <= 30000 && (risk == 1 || risk == 2)) {
            printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
        else {
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        }
    }
    else {
        if (income > 75000 && risk == 3) {
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        } else {
            printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
    }

    return 0;
}
