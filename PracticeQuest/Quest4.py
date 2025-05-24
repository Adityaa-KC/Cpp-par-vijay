# For any number n, write aprogram to list all the solutions of the equation x1+x2+X3+...+Xn =C,where C is a constant (C<=10) 
# and x1,X2,X3,...,Xn are nonnegative integers, using brute force strategy.

from itertools import product

def solutions(n,C):
    count = 0
    for combo in product(range(C+1),repeat=n):
        if sum(combo) == C:
            print(combo)
            count += 1
    print(f"\nTotal Solutions : {count}")

def main():
    n = int(input("enter the value of n :"))
    C = int(input("Enter the value of Constant C(0-10) :"))
    solutions(n,C)

if __name__ == "__main__":
    main()