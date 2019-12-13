# Copyright (C) 2019 Syed Shah
# See the LICENSE file at the root of this tree.
# (GPL v3)
from collatz import collatz

def main(argv):
    if len(argv) > 1:
        collatz(int(argv[1]))
        return 0
    else:
        return 1

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
