# count the multiplicity of the factor y in x
def multiplicity(x, y):
    count = 0
    while x % y == 0:
        x //= y
        count += 1
    return count


n = int(input())

two = 0
five = 0

for _ in range(n):
    x = int(input())
    if x % 2 == 0:
        two += multiplicity(x, 2)
    if x % 5 == 0:
        five += multiplicity(x, 5)

# the min is the number of pairs of (2, 5)
zeros = min(two, five)

# OUTPUT
print(zeros)