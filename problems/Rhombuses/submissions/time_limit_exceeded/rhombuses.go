package main

import (
	"fmt"
	"math"
)

func main() {
	var n int
	fmt.Scanf("%d", &n)

	result := 0
	// summation of i^2 from 1 to n
	for i := 1; i <= n; i++ {
		result += int(math.Pow(float64(i), float64(2)))
	}
	fmt.Println(result)
}
