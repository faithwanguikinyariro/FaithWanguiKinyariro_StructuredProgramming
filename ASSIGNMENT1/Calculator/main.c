
#include <stdio.h>

int main() {
    float a, b;
    char sign;
    printf("Type your math problem (e.g., 6 + 3) and press Enter: ");
    scanf("%f %c %f", &a, &sign, &b);
    if (sign == '+') {
        printf("Answer: %.1f\n", a + b);
    }
    else if (sign == '-') {
        printf("Answer: %.1f\n", a - b);
    }
    else if (sign == '*') {
        printf("Answer: %.1f\n", a * b);
    }
    else if (sign == '/') {
        if (b == 0) {
            printf("Cannot divide by zero.\n");
        } else {
            printf("Answer: %.1f\n", a / b);
        }
    }
    else {
        printf("Unknown operator: %c\n", sign);
    }

    return 0;
}
