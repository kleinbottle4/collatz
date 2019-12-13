/* collatz.c uses collatz.h
 * Copyright (C) 2019 Syed Shah
 * See the LICENSE file at the root of this project tree.
 * (GPL v3)
 */

#include <stdlib.h>
#include "collatz.h"

int main(int argc, const char **argv)
{
    if (argc <= 1) {
        return 1;
    } else {
        collatz(atoi(argv[1]));
        return 0;
    }
}

