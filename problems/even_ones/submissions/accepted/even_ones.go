package main

import "fmt"

func main() {
	var n uint
	fmt.Scanf("%d", &n)

	if (n%2 == 0) && (n != 2) {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
