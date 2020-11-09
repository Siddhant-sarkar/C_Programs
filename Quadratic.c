#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, r1, r2, real, imag;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("**************************\n");
        printf("root1 is = %lf \n root2 is = %lf", r1, r2);
        printf("\n**************************");
    }
    else if (discriminant == 0) {
        r1 = r2 = -b / (2 * a);
        printf("**************************\n");
        printf("root1 = root2 = %lf;", r1);
        printf("\n**************************");
    }
    else {
        real = -b / (2 * a);
        imag = sqrt(-discriminant) / (2 * a);
        printf("**************************\n");
        printf("root1 = %lf+%lfi \n root2 = %lf-%lfi", real, imag, real, imag);
        printf("\n**************************");
    }

    return 0;
} 