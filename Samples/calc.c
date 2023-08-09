#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Einfacher Taschenrechner\n");
    printf("Verfügbare Operatoren: +, -, *, /\n");

    printf("Gib den Operator ein (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Gib die erste Zahl ein: ");
    scanf("%lf", &num1);

    printf("Gib die zweite Zahl ein: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Fehler: Division durch Null ist nicht erlaubt!\n");
                return 1; // Beende das Programm mit einem Fehlercode
            }
            break;
        default:
            printf("Ungültiger Operator!\n");
            return 1; // Beende das Programm mit einem Fehlercode
    }

    printf("Das Ergebnis von %.2lf %c %.2lf ist %.2lf\n", num1, operator, num2, result);

    return 0;
}
