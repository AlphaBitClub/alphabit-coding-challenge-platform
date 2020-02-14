package main

import (
	"fmt"
	"math"
	"strconv"
)

func main() {
	var n string
	fmt.Scanf("%s", &n)

	result := ""

	for _, digit := range n {
		c, _ := strconv.ParseInt(string(digit), 10, 32)
		result += strconv.FormatInt(int64(math.Pow(float64(c), 2)), 10)
	}

	fmt.Println(result)
}
