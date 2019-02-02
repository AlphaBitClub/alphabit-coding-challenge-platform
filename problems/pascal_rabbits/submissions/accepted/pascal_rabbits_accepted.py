from math import factorial

# print result mod 10^9+7
P = pow(10, 9) + 7


# https://en.wikipedia.org/wiki/Binomial_coefficient
def binomial(k, n):
    return factorial(n)//(factorial(k)*factorial(n-k))


# INPUT
n = int(input())
init_cells = []
for _ in range(n):
    init_cells.append(int(input()))

# generate the nth tow pascal's triangle
binomial_coefficients = [binomial(i, n-1) for i in range(n)]

# cell_1^coef_1 * cell_2^coef_2 * ... * cell_n^coef_n
# the result must be % P
final_cell = 1
for c, b in zip(init_cells, binomial_coefficients):
    final_cell *= pow(c, b) % P
    final_cell %= P

# OUTPUT
print(final_cell)
