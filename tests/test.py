#!/usr/bin/env python3
import os
import subprocess
import sys
from enum import Enum

VERBOSE = False

class Result(Enum):
    ERROR = -1
    KO = 0
    OK = 1

def print_results(output, header_len, result, verbose=VERBOSE):
    if verbose:
        print("\n==STDOUT", end="")
        print("=" * (header_len - 8))
        print(output.decode('utf-8'), end="")
        print("=" * header_len)
    if result == Result.ERROR:
        print("ERROR!")
    elif result == Result.KO:
        print("KO")
    elif result == Result.OK:
        print("OK")
    else:
        print("UNDEFINED")

if __name__ == "__main__":
    if len(sys.argv) > 1:
        VERBOSE = True
    files = os.listdir("./target/")
    for file in files:
        output = f"target/{file}"
        header = f"Running {file}"
        print(header, end="\t")
        try:
            test_output = subprocess.check_output([f'{output}'])
            print_results(test_output, len(header), Result.OK, VERBOSE)
        except subprocess.CalledProcessError as test_error:
            if test_error.returncode == 1:
                print_results(test_error.output, len(header), Result.KO, True)
            else:
                print_results(test_error.output, len(header), Result.ERROR, True)
