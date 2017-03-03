#include <stdlib.h>
#include <stdio.h>

#include <errno.h>

int main(int argc, char** argv) {
    int input;
    while(1) {

        if (scanf("%d", &input) == -1) {
            return EOF;
        }

        switch (input) {
            case 1:
                printf("Nice job.\n");
                break;
            case 2:
                printf("Woah bro.\n");
                return 1;
                break;
            default:
                printf("What?\n");
                break;
        }
    }
    return 0;
}

