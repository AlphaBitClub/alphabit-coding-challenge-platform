n = int(input())
memSize = 0


def findMemorySize(memorySize):
    if (memorySize & (memorySize - 1)) == 0:
        return memorySize
    powerOfTwo = 1
    while powerOfTwo < memorySize:
        powerOfTwo <<= 1
    return powerOfTwo


for i in range(0, n):
    dataSize = int(input())
    memSize += dataSize

memSize = findMemorySize(memSize)

print(memSize)
