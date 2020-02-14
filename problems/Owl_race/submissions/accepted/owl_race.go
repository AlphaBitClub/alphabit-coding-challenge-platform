package main

import (
	"fmt"
	"math"
)

func main() {
	var x1, v1, x2, v2 int
	fmt.Scanf("%d %d %d %d", &x1, &v1, &x2, &v2)

	if v1 == v2 {
		if x1 == x2 {
			fmt.Println("YES")
		} else {
			fmt.Println("No")
		}
	} else {
		t := int(math.Abs(float64((x2 - x1) / (v1 - v2))))
		eq1 := x1 + v1*t
		eq2 := x2 + v2*t

		if eq1 == eq2 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
