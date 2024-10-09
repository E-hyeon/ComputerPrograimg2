//while ¹Ýº¹¹®
#include <stdio.h>

int main() {
    int i = 0;

    while (i < 5) {
        int j = 0;
        while (j < i) {
            printf("0");
            j++;
        }

        printf("*\n");

        i++; 
    }

    return 0;
}