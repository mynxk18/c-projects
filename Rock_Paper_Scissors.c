#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getcomputerchoice(void);
int getuserchoice(void);
void checkwinner(int userchoice, int computerchoice);

int main(void) {
    srand((unsigned)time(NULL));
    printf("### ROCK PAPER SCISSORS ###\n\n");

    int userchoice = getuserchoice();
    int computerchoice = getcomputerchoice();

    switch (userchoice) {
        case 1: printf("YOU CHOSE ROCK\n"); break;
        case 2: printf("YOU CHOSE PAPER\n"); break;
        case 3: printf("YOU CHOSE SCISSORS\n"); break;
    }

    switch (computerchoice) {
        case 1: printf("COMPUTER CHOSE ROCK\n"); break;
        case 2: printf("COMPUTER CHOSE PAPER\n"); break;
        case 3: printf("COMPUTER CHOSE SCISSORS\n"); break;
    }

    checkwinner(userchoice, computerchoice);

    return 0;
}

int getcomputerchoice(void) {
    return (rand() % 3) + 1; // 1..3
}

int getuserchoice(void) {
    int choice = 0;
    do {
        printf("\nChoose an option\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            // clear invalid input
            int c;
            while ((c = getchar()) != '\n' && c != EOF) { }
            choice = 0;
        }
    } while (choice < 1 || choice > 3);
    return choice;
}

void checkwinner(int userchoice, int computerchoice) {
    if (userchoice == computerchoice) {
        printf("\nIt's a TIE!\n");
        return;
    }

    // user wins cases
    if ((userchoice == 1 && computerchoice == 3) || // rock beats scissors
        (userchoice == 2 && computerchoice == 1) || // paper beats rock
        (userchoice == 3 && computerchoice == 2)) { // scissors beats paper
        printf("\nYOU WIN!\n");
    } else {
        printf("\nCOMPUTER WINS!\n");
    }
}
