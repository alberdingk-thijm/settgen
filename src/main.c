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

