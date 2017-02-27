#include <stdlib.h>
#include <stdio.h>

int main(int argc, char[] argv) {
    int input;
    while(1) {

        input = sscanf("%i");

        switch (input) {
            case 1:
                break;
            case 2:
                return 1;
                break;
            default:
                break;
        }
    }
	return 0;
}

