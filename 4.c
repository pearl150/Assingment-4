//# assingment4
//rock,paper,sissor
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int userChoice, computerChoice;
    char *choices[] = {"Rock", "Paper", "Scissors"};
    srand(time(0));
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Choose an option:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &userChoice);
    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice. Please choose 1, 2, or 3.\n");
        return 1;
    }
    int randomNum = rand() % 101;
    if (randomNum < 33) {
        computerChoice = 1;
    } else if (randomNum < 66) {
        computerChoice = 2;
    } else {
        computerChoice = 3;
    }
    printf("You chose: %s\n", choices[userChoice - 1]);
    printf("Computer chose: %s\n", choices[computerChoice - 1]);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||  
               (userChoice == 2 && computerChoice == 1) ||  
               (userChoice == 3 && computerChoice == 2)) {  
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
    return 0;
}
