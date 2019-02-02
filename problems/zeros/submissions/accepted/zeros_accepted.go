package main

import "fmt"

// count the multiplicity of the factor y in x
func multiplicity(x, y int) int {
	count := 0
	for x%y == 0 {
		x /= y
		count++
	}
	return count
}

func main() {
	var n, x int
	fmt.Scanf("%d", &n)
	two := 0
	five := 0
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &x)
		if x%2 == 0 {
			two += multiplicity(x, 2)
		}
		if x%5 == 0 {
			five += multiplicity(x, 5)
		}
	}

	// the min is the number of pairs of (2, 5)
	var zeros int
	if two < five {
		zeros = two
	} else {
		zeros = five
	}

	// OUTPUT
	fmt.Println(zeros)
}
