#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void hanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        printf("Di chuyen 1 tu %c sang %c\n", source, target);
        return;
    }
    hanoi(n - 1, source, auxiliary, target);
    printf("di chuyen %d tu %c sang %c\n", n, source, target);
    hanoi(n - 1, auxiliary, target, source);
}

int main() {
    int n = 3;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}