# print result mod 10^9+7
P = pow(10, 9) + 7

x, y = map(int, input().split())
n = int(input())

# // is for integer division
# n//x is the number of how many multiples of x in [0..n]
# calculate the sum using the summation formula n*(n+1)/2
# then multiplay it by x


def calc_multiples(x, n):
    s = 0
    for i in range(0, n+1, x):
        s = (s + i) % P
    return s


# multiples of x
mx = calc_multiples(x, n)
# multiples of y
my = calc_multiples(y, n)
# multiples of x*y (the common multiples)
mxy = calc_multiples(x*y, n)

# the result is the sum of x and y multiples - the common multiples
s = (mx + my - mxy) % P
print(s)
