package main

import "fmt"

const P = 1000000007

func main() {
	var n int
	// INPUT
	fmt.Scanf("%d", &n)	
	
	// summation formula
	s := (n * (n+1) / 2) % P
	
	// OUTPUT
	fmt.Println(s)
}
