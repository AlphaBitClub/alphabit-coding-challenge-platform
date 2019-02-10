package main

import "fmt"

func main() {
	var n, s, i int64
	fmt.Scanf("%v", &n)
	s = 0
	for i = 0; i <= n; i++ {
		s += i
	}
	fmt.Println(s)
}
