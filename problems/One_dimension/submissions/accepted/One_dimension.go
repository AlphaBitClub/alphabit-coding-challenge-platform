package main

import "fmt"

func main() {
	var t, n, m, i, j uint
	fmt.Scanf("%d", &t)
	array := make([]uint, t)
	for i := uint(0); i < t; i++ {
		fmt.Scanf("%d", &array[i])
	}
	fmt.Scanf("%d %d", &n, &m)
	fmt.Scanf("%d %d", &i, &j)
	index := i*m + j
	fmt.Println(array[index])
}
