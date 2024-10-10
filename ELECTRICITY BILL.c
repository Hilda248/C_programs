#include <stdio.h>

int main() {
    int customer_id;
    char customer_name[50];
    float units, bill, rate,surcharge;

    // Input
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customer_name);
    printf("Enter Units Consumed: ");
    scanf("%f", &units);

    // Calculate rate and bill
    if (units <= 199) {
        rate = 1.20;
    } else if (units <= 399) {
        rate = 1.50;
    } else if (units <= 599) {
        rate = 1.80;
    } else {
        rate = 2.00;
    }
    bill = units * rate;

    // Apply surcharge if bill > 400
    if (bill > 400) {
        bill += bill * 0.15;
    }

    // Ensure minimum bill of 100
    if (bill < 100) {
        bill = 100;
    }

    // Output
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %.2f\n", units);
    printf("Charges per Unit: %.2f\n", rate);
    printf("surcharge: %lf\n", surcharge);
    printf("Total Amount to Pay: %.2f\n", bill);

    return 0;
}