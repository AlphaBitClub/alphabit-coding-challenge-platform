from math import factorial

# https://en.wikipedia.org/wiki/Binomial_coefficient
def binomial(k, n):
    return factorial(n)//(factorial(k)*factorial(n-k))


# INPUT
n, k = map(int, input().split())

init_cells = list(map(int, input().split()))

# the kth coefficient of the nth row of pascal's triangle
c = binomial(k-1, n-1)

# the number of rabbits with the kth gene is c*init_cells[k-1]
kth_gene_rabbits_number = c * init_cells[k-1]

# OUTPUT
print(kth_gene_rabbits_number)
