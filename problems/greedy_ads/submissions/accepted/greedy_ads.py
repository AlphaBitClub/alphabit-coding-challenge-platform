# import time

ch = []
s = []
sums = []

# inputs
n = int(input())
for _ in range(n):
    ch.append([])
    sums.append(0)

s.extend(map(int, input().split(',')))

# start_time = time.time()

for i in sorted(s, reverse=True):
    # get the index of the channel with the least sum of ad revenues
    index_min = min(range(len(sums)), key=sums.__getitem__)
    # add the commercial to the channel with the minimum sum of revenues
    ch[index_min].append(i)
    # update the sums table
    sums[index_min] += i

print(ch)

# print("--- %s seconds ---" % (time.time() - start_time))


# O(n log n).
# test for the greedy approach : ch = 2 and  s = {4, 5, 6, 7, 8}
