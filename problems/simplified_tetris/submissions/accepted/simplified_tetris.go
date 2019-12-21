package main

import "fmt"

func main() {
	var d, s, n uint
	fmt.Scanf("%d", &d)
	fmt.Scanf("%d", &s)
	fmt.Scanf("%d", &n)

	if n == 1 {
		fmt.Println(s)
	} else if (2*d + s) >= n {
		if n%2 == 0 {
			fmt.Println((4*d + s) / n)
		} else {
			if 2*d >= s {
				fmt.Println(s)
			} else {
				fmt.Println((4*d + s) / n)
			}
		}
	} else {
		fmt.Println(0)
	}
}
