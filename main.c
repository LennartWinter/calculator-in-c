#include <stdio.h>
#include <stdlib.h>

float plus(int a, int b) {
    return a + b;
}

float minus(int a, int b) {
    return a - b;
}

float multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a / b;
}

float power(char a, char b) {
    float result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

float root(char a, char b) {
    float result = 1;
    for (int i = 0; i < b; i++) {
        result /= a;
    }
    return result;
}

int main() {
    printf("Number1: ");
    char num10[100];
    scanf("%s", num10);
    printf("Operator: ");
    char op[100];
    scanf("%s", op);
    printf("Number2: ");
    char num20[100];
    scanf("%s", num20);
    float num1 = atof(num10);
    float num2 = atof(num20);
    printf("Result: ");
    if (op[0] == '+') {
        printf("%f", plus(num1, num2));
    } else if (op[0] == '-') {
        printf("%f", minus(num1, num2));
    } else if (op[0] == '*') {
        printf("%f", multiply(num1, num2));
    } else if (op[0] == '/') {
        printf("%f", divide(num1, num2));
    } else if (op[0] == '^') {
        printf("%f", power(num1, num2));
    } else if (op[0] == 'r') {
        printf("%f", root(num1, num2));
    } else {
        printf("Error");
    }

    return 0;
}