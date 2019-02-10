package main

import "fmt"

func main() {
	var n, s int64
	// INPUT
	fmt.Scanf("%v", &n)

	// summation formula
	s = n * (n + 1) / 2

	// OUTPUT
	fmt.Println(s)
}
