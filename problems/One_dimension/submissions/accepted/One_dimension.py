oneDim = []
oneDim = list(map(int,input().split()))
n,m = map(int,input().split())
i,j = map(int,input().split())
matrixResult = i * (n-1) + j * (m-1)
print(oneDim[matrixResult])