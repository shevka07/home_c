#include <stdio.h>
#include <stdbool.h>

void printImplicationTable() {
    printf("Таблица истинности для импликации (A -> B):\n");
    printf("--------------------------------------\n");
    printf("| A     | B     | !A    | A -> B | !A || B |\n");
    printf("--------------------------------------\n");
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            bool A = a;
            bool B = b;
            bool notA = !A;
            bool implication = (!A) || B;
            bool or_result = notA || B;
            printf("| %-5s | %-5s | %-5s | %-6s | %-6s |\n", A ? "true" : "false", B ? "true" : "false", notA ? "true" : "false", implication ? "true" : "false", or_result ? "true" : "false");
        }
    }
    printf("--------------------------------------\n");
}

void printEquivalenceTable() {
    printf("Таблица истинности для эквивалентности (A <-> B):\n");
     printf("------------------------------------------------------------\n");
    printf("| A     | B     | A && B | !A    | !B    | !A && !B | (A && B) || (!A && !B) | A <-> B |\n");
     printf("------------------------------------------------------------\n");
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            bool A = a;
            bool B = b;
            bool andAB = A && B;
            bool notA = !A;
            bool notB = !B;
            bool notAandNotB = notA && notB;
            bool result = andAB || notAandNotB;
            bool equivalence = (A && B) || (!A && !B);
             printf("| %-5s | %-5s | %-6s | %-5s | %-5s | %-8s | %-15s | %-7s |\n", A ? "true" : "false", B ? "true" : "false", andAB ? "true" : "false", notA ? "true" : "false", notB ? "true" : "false", notAandNotB ? "true" : "false", result ? "true" : "false",  equivalence ? "true" : "false");
        }
    }
    printf("------------------------------------------------------------\n");
}

int main() {
    printImplicationTable();
    printf("\n");
    printEquivalenceTable();

    return 0;
}