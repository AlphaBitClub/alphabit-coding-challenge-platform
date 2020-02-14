package main

import (
	"fmt"
	"math"
)

func main() {
	var g int
	fmt.Scanf("%d", &g)
	result := (g-1)*int(math.Pow(float64(2), float64(g))) + 1
	fmt.Println(result)
}
