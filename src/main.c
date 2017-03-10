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

int main(int argc, char* argv[]) {
    int input;
    char* old;
    while(1) {

        printf("*********************************\n"
               "* Welcome to settgen!           *\n"
               "* Please type a command.        *\n"
               "* 1 - test                      *\n"
               "* 2 - quit                      *\n"
               "*********************************\n"
               );

        if (scanf("%d", &input) == -1) {
            return EOF;
        }

        switch (input) {
            case 1:
                printf("Nice job.\nTell me something: ");
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
            case 2:
                printf("Woah bro.\n");
                return 0;
                break;
            default:
                printf("What?\n");
                break;
        }
    }
    return 0;
}

