#!/usr/bin/env python3
import os
import subprocess
import sys
from enum import Enum

RED = "\033[0;31m"
GREEN = "\033[0;32m"
YELLOW = "\033[0;33m"

WHITE = "\033[0;37m"
RESET = "\033[0m"

class Result(Enum):
    ERROR = -1
    KO = 0
    OK = 1

def print_results(output, header_len, result, verbose=False):
    if verbose:
        print(f"\n{YELLOW}==STDOUT", end="")
        print("=" * (header_len - 8))
        print(RESET + output.decode('utf-8'), end="")
        print(YELLOW + ("=" * header_len) + RESET)
    if result == Result.ERROR:
        print(f"{RED}ERROR!{RESET}")
    elif result == Result.KO:
        print(f"{RED}KO{RESET}")
    elif result == Result.OK:
        print(f"{GREEN}OK{RESET}")
    else:
        print(f"{YELLOW}UNDEFINED{RESET}")
    if verbose:
        print()

if __name__ == "__main__":
    VERBOSE = False
    if len(sys.argv) > 1:
        VERBOSE = True
    files = os.listdir("./target/")
    for file in files:
        output = f"target/{file}"
        header = f"Running {file}"
        print(WHITE + header + RESET, end=" "*(35 - len(header)))
        try:
            test_output = subprocess.check_output([f'{output}'])
            print_results(test_output, len(header), Result.OK, VERBOSE)
        except subprocess.CalledProcessError as test_error:
            if test_error.returncode == 1:
                print_results(test_error.output, len(header), Result.KO, VERBOSE)
            else:
                print_results(test_error.output, len(header), Result.ERROR, VERBOSE)
