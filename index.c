#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("What is your name?\n> ");
    char name[50];
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    printf("Rolling a dice...\n");
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    printf("Die 1: %d\n", dice1);
    printf("Die 2: %d\n", dice2);
    printf("Total: %d\n", dice1 + dice2);
    if ((dice1 + dice2) > 7) {
        printf("You won!\n");
    } else {
        printf("You lost.\n");
    }

    return 0;
}