package main

import "fmt"

func findMemorySize(memorySize uint) uint {
	// return memorySize if it is a power of 2
	if memorySize&(memorySize-1) == 0 {
		return memorySize
	}

	// left shift powerOfTwo by 1
	// until powerOfTwo is sufficient to store all the data
	var powerOfTwo uint = 1
	for (powerOfTwo) < memorySize {
		powerOfTwo <<= 1
	}

	return powerOfTwo
}

func main() {
	var n, i, dataSize, memSize uint
	fmt.Scanf("%d", &n)
	memSize = 0
	for i = 0; i < n; i++ {
		fmt.Scanf("%d", &dataSize)
		memSize += dataSize
	}
	memSize = findMemorySize(memSize)
	fmt.Println(memSize)
}
