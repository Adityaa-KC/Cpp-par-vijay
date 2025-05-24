# 3. WriteaProgram that generates all the permutations of a given set of digits, with or without repetition.
from itertools import permutations,product

def print_perm(perms):
    for p in perms:
        print(''.join(p))

def generate_perm():
    nums = input("Enter the digits in series (eg: 123):")
    n = int(input("\nOptions :\n1. Without Repetition\n2. With Repetition\nChoice :"))
    if n == 1:
        perms = permutations(nums)
        print_perm(perms)

    elif n == 2:
        m = (input("Enter the length of permutation : "))
        perms = product(nums,m)
        print_perm(perms)
              

    else:
        print("Invalid Choice")

generate_perm()