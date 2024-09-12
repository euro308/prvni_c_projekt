#include <stdio.h>
#include <stdlib.h>

float handle_math_problem(float number1, char operation, float number2) {
    switch (operation) {
        case '+':
            return number1 + number2;
        case '-':
            return number1 - number2;
        case '*':
            return number1 * number2;
        case '/':
            if (number2 != 0) {
                return number1 / number2;
            } else {
                fprintf(stderr, "Error: Nelze delit nulou!\n");
                exit(1);
            }
        default:
            fprintf(stderr, "Error: Chybne znamenko: %c", operation);
            exit(1);
    }
}

int main(void) {
    float input_number1, input_number2;
    char operation;

    printf("Zadej priklad (format 2 + 3): ");
    scanf("%f %c %f", &input_number1, &operation, &input_number2);
    printf("%s %f", "Vysledek prikladu: ", handle_math_problem(input_number1, operation, input_number2));
    return 0;
}
