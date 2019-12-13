# Copyright (C) 2019 Syed Shah
# See the LICENSE file at the root of this project tree.
# (GPL v3)
def collatz(n):
    print(n)
    if n == 1:
        return 1
    elif n % 2 == 0:
        return collatz(n // 2)
    else:
        return collatz(n * 3 + 1)
