/*
NAME:GICHUNGE NICKSON MUTUGI
REG NO:CT101/G/26562/25
DATE:26TH OCT 2025
*/





#include <stdio.h>

int main() {
    int chain[3][5][10];  // 3 branches, 5 floors, 10 rooms
    int b,f,r;
    // Example: assigning room numbers
    for ( b = 0; b < 3; b++) {
        for ( f = 0; f < 5; f++) {
            for (r = 0; r < 10; r++) {
                chain[b][f][r] = (b + 1) * 100 + (f + 1) * 10 + (r + 1);
            }
        }
    }

    // print one value
    printf("Branch 2, Floor 3, Room 5 number: %d\n", chain[1][2][4]);
    return 0;
}