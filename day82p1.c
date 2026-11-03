/**
 * 100 Days of Code - UPES
 * Day 82: 03 November 2026
 * Problem 1 (Q132 - Enum)
 * 
 * Question: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

void checkLight(enum TrafficLight light) {
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid light\n");
    }
}

int main() {
    char input[20];
    if (scanf("%19s", input) == 1) {
        for (int i = 0; input[i]; i++) input[i] = toupper(input[i]);
        if (strcmp(input, "RED") == 0) checkLight(RED);
        else if (strcmp(input, "YELLOW") == 0) checkLight(YELLOW);
        else if (strcmp(input, "GREEN") == 0) checkLight(GREEN);
        else printf("Invalid input\n");
    } else {
        // Default demonstration
        checkLight(GREEN);
    }
    return 0;
}