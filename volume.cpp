//volume of a sphere
#include <stdio.h>

#define PI 3.142 // Define PI as a constant

int main() {
    int r;
    double volume; // Use double for volume to allow decimal values

    printf("Enter r: ");
    scanf("%d", &r); 

    volume = 4 / 3 * PI * r * r * r; // Use * for multiplication and correct the calculation

    printf("The volume is: %.2f\n", volume); // Use %.2f for formatted output

    return 0;
}