# Write a Program to evaluate a polynomial function. (For example store f(x)=4n^2+
# 2n +9 in an array and for agiven value of n, say n=5, compute the value of f(n)).

def evaluate_polynomial(coefficients, n):
    result = 0
    degree = len(coefficients) - 1
    for i, coeff in enumerate(coefficients):
        power = degree - i
        result += coeff * (n ** power)
    return result

# Example: f(n) = 4n^2 + 2n + 9
# Coefficients are stored from highest degree to constant term
coeffs = [4, 2, 9]  # 4n^2 + 2n + 9

n = 5  # Value to evaluate the polynomial at

value = evaluate_polynomial(coeffs, n)
print(f"f({n}) = {value}")
