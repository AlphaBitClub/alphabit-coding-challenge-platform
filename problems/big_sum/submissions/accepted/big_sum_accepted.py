# print result mod 10^9+7
P = pow(10, 9) + 7

# INPUT
n = int(input())

# summation formula
s = (n * (n+1) / 2) % P

# OUTPUT
print(s)
