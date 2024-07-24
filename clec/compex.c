#include <stdio.h>

int main() {
    float totalExpenses = 0;
    float dailyExpenses[] = {120.50, 85.75, 200.00, 50.25, 175.80, 95.40, 150.30};
    int days = 7;

    printf("daily expenses:\n");
    for (int i = 0; i < days; i++) {
        printf("day %d: %.2f baht\n", i + 1, dailyExpenses[i]);
        totalExpenses += dailyExpenses[i];
    }

    printf("\nttl expenses: %.2f baht\n", totalExpenses);

    float averageExpense = totalExpenses / days;
    printf("avg expenses/day: %.2f baht\n", averageExpense);

    // สมมติว่ามีรายจ่ายเพิ่มเติมที่เพิ่งพบ
    float additionalExpense = 55.25;

    totalExpenses += additionalExpense;
    
    printf("\nfound additional expenses: %.2f baht\n", additionalExpense);
    printf("new ttl expenses: %.2f baht\n", totalExpenses);

    averageExpense *= days;
    averageExpense += additionalExpense;
    days += 1;
    averageExpense /= days;
    
    printf("new avg expenses: %.2f baht\n", averageExpense);

    return 0;
}