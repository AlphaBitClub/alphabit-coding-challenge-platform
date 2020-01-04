package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)
	for i := n; i > 0; i-- {
		for x := 1; x < i; x++ {
			fmt.Print("0")
		}
		for y := i; y <= n; y++ {
			fmt.Print("1")
		}
		fmt.Println()
	}
}
