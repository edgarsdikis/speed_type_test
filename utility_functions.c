#include "speed_test.h"

// clear the screen
void clearScreen() {
    // For Windows
    #ifdef _WIN32
        system("cls");
    // For Linux/Mac
    #else
        system("clear");
    #endif
}

// welcome message    
void welcome() {

    printf("Welcome to the Speed Typing Test!\n\n"
           "Get ready to test your typing skills. "
           "In this challenge, you'll type a given text as quickly and accurately as possible. "
           "Once you're done, we'll provide feedback on your time, speed, and accuracy.\n\n"
           "Are you ready to take on the challenge?\n\n "
           "Type yes to begin or no to exit.\n");
}

// users response to welcome
int welcome_response() {
    
    char response[4]; // array to store input for "yes" or "no"
    while (1) {
        if (scanf("%s",response) != 1) {
            printf("ERROR\n");
            return -1;
        }
        if (strcmp(response, "yes") == 0) {
            printf("Great! Let's start the test\n");
            return 1;
        }
        else if (strcmp(response, "no") == 0) {
            printf("Exiting the Speed Typing Test. See you next time!\n");
            return 0;
        }
        else {
            printf("Invalid input. Please type 'yes' or 'no'.\n");
            int ch;
            while ((ch = fgetc(stdin)) != '\n' && ch != EOF);
        }
    }
}
