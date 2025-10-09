/*
NAME:GICHUNGE NICKSON MUTUGI
REG NO:CT101/G/26562/25
DATE:9 SEP 2025
*/



#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }

    } while (password != 1234);

    printf("Access Granted\n");

    return 0;
}