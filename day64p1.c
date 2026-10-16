/**
 * 100 Days of Code - UPES
 * Day 64: 16 October 2026
 * Problem 1 (Q114 - Logic Enhancers)
 * 
 * Question:
 * Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
 */
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, len, max = 0, count;

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len; i++) {
        int visited[256] = {0};
        count = 0;

        for (j = i; j < len; j++) {
            if (visited[(unsigned char)s[j]] == 1) {
                break;
            }

            visited[(unsigned char)s[j]] = 1;
            count++;
        }

        if (count > max) {
            max = count;
        }
    }

    printf("%d", max);

    return 0;
}
