# 1st line
n, t, c, d = map(int, input().strip().split())

# the next n lines
stations = []
for _ in range(n):
    stations.append(int(input()))

# solve the equation tx = cx - cd
# to find the moment where the car overtake the train
x = (c*d/60) / (c - t)

# s is the the traveled distance
s = t * x

# note: list start at 0 but the station numbering starts from 1
# if the stations[i] > s we should stop at stations[i-1]
# the stations index is i, and station number is i+1
# so we print i-1+1 => i
for i in range(1, n):
    if stations[i] > s:
        print(i)
        break
