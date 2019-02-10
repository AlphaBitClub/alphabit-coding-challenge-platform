package main

import "fmt"

func calc_multiples(x, n int64) int64 {
	multi_num := n / x
	sum := multi_num * (multi_num + 1) / 2
	sum = sum * x
	return sum
}

func main() {
	var x, y, n, s, mx, my, mxy int64
	fmt.Scanf("%v %v", &x, &y)
	fmt.Scanf("%v", &n)

	mx = calc_multiples(x, n)
	my = calc_multiples(y, n)
	mxy = calc_multiples(x*y, n)

	s = mx + my - mxy
	fmt.Println(s)
}
