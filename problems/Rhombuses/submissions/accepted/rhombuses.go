package main

import "fmt"

func main() {
	var n int
	fmt.Scanf("%d", &n)
	result := (n * (n + 1) * (2*n + 1)) / 6
	fmt.Println(result)
}
