#include <stdio.h>
#include <math.h> // Include math.h for the pow function

int main() {
    // Declaration and initialization 
    float p, t, r, n, CI, A;

    printf("Enter principal (p): ");
    scanf("%f", &p);
    printf("p is %f \n", p);

    printf("Enter time (t in years): ");
    scanf("%f", &t);
    printf("t is %f \n", t);

    printf("Enter rate (r as a percentage): ");
    scanf("%f", &r);
    r = r / 100; // Correctly convert percentage to decimal
    printf("r is %f \n", r);

    printf("Enter number of times interest is compounded per year (n): ");
    scanf("%f", &n);
    printf("n is %f \n", n);

    // Calculate compound interest
    A = p * pow((1 + r / n), (n * t)); // Use 'p' instead of 'P'
    printf("A is %f \n", A);

    CI = A - p; // Calculate compound interest
    printf("CI is %f \n", CI);

    return 0;
}
