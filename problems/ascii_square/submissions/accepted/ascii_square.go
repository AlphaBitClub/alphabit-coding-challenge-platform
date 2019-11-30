package main

import (
	"fmt"
	"math"
	"strings"
)

func main() {
	const letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

	var x byte
	fmt.Scanf("%c", &x)

	x_index := strings.IndexByte(letters, x)
	width := 2*x_index + 1

	for i := 0; i < width; i++ {
		line := make([]byte, width)
		// var line []byte
		for j := 0; j < width; j++ {
			i_distance := int64(math.Abs(float64(i - x_index)))
			j_distance := int64(math.Abs(float64(j - x_index)))
			c_index := int64(math.Max(float64(i_distance), float64(j_distance)))
			c := letters[c_index]
			line = append(line, c)
		}

		line_str := string(line)
		fmt.Println(line_str)
	}
}
