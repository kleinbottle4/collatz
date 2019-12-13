/* Copyright (C) 2019 Syed Shah
 * See the LICENSE file at the root of this project tree.
 * (GPL v3)
 */

#include <stdio.h>

int collatz(int n)
{
    printf("%d\n", n);
    if (n == 1) {
        return 1;
    } else if (n % 2 == 0) {
        return collatz(n / 2);
    } else {
        return collatz(n * 3 + 1);
    }
}

