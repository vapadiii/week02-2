#include <stdio.h>
#include <stdlib.h>

main() {
    float weight = 0, height = 0, calbmi;
    printf("Your weight (km) :");
    scanf("%f", &weight);
    printf("Your height (m):");
    scanf("%f", &height);
    calbmi = weight / (height * height);
    printf("Your BMI :%f\n", calbmi);
    if (calbmi < 18.5) {
        printf("Underweight\n");
    }
    else if (calbmi >= 18.5 && calbmi <= 24.9) {
        printf("normal\n");
    }
    else if (calbmi >= 25.0 && calbmi <= 29.9) {
        printf("Over weight\n");
    }
    else if (calbmi >= 30.0) {
        printf("Too fat\n");
    }
}