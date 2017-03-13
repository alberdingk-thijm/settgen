/*
 *  settgen - an RPG settlement generator
 *  Copyright (C) 2017  Tim Alberdingk Thijm
 *  tim.thijm at gmail.com
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <errno.h>

// ansi colors
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

// Test function to play with passing strings
// Note that the static declaration means it may not be destroyed properly
// (buffer overflows)
char* foo(char* s) {
    static char new[256];
    new[0] = '\0';
    strncpy(new, s, 256);
    new[255] = '\0';
    return new;
}

static int show_splashscreen() {
    char buf[1024];
    FILE* fp;
    int nput;

    fp = fopen("../lib/welcome.txt", "r");
    if (!fp) {
        perror("Failed to open file.");
        return ENOENT;
    }

    while (fread(buf, sizeof(buf), 1, fp) > 0) {
        nput = puts(ANSI_COLOR_GREEN buf ANSI_COLOR_RESET);
        if (nput == EOF)
            perror("puts()");
    }

    fclose(fp);
    return 0;
}

int main(int argc, char* argv[]) {
    char input;
    char* old;
    while(1) {

        if (show_splashscreen() != 0) {
            return EOF;
        }
        /*
        printf("*********************************\n"
               "* Welcome to settgen!           *\n"
               "* Please type a command.        *\n"
               "* 1 - test                      *\n"
               "* 2 - quit                      *\n"
               "*********************************\n"
               );
               */

        if (scanf("%c", &input) == -1) {
            return EOF;
        }

        switch (input) {
            case 'n':
                printf("Nothing here yet! Tell me something... \n");
                old = malloc(256 * sizeof(char));
                if (old == NULL) {
                    return ENOMEM;
                }
                if (scanf("%s", old) == -1) {
                    printf("What?\n");
                } else {
                    printf("%s\n", foo(old));
                }
                free(old);
                break;
            case 'q':
                return 0;
                break;
            default:
                break;
        }
    }
    return 0;
}
