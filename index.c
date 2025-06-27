#include <stdio.h>

int main() {
    printf("Rolling a dice...\n");
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    printf("Die 1: %d\n", dice1);
    printf("Die 2: %d\n", dice2);
    printf("Total: %d\n", dice1 + dice2);

    return 0;
}