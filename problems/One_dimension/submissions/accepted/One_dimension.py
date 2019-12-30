oneDim = []
oneDim = list(map(int, input().split()))
n, m = map(int, input().split())
i, j = map(int, input().split())
matrixResult = i * m + j
print(oneDim[matrixResult])
