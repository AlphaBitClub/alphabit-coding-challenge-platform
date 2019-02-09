package main

import "fmt"

func main() {
	var n int
	fmt.Scanf("%d", &n)
	s := 0
	for i := 0; i <= n; i++ {
		s += i
	}
	fmt.Println(s)
}
