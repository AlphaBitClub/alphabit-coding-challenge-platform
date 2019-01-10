package main

import "fmt"

const P = 1000000007

func calc_multiples(x, n uint64) uint64 {
	multi_num := n / x
	sum := (multi_num * (multi_num + 1) / 2) % P
	sum = (sum * x) % P
	return sum
}

func main() {
	var x, y, n, s, mx, my, mxy uint64
	fmt.Scanf("%d %d", &x, &y)
	fmt.Scanf("%d", &n)

	mx = calc_multiples(x, n)
	my = calc_multiples(y, n)
	mxy = calc_multiples(x*y, n)

	s = (mx + my - mxy) % P
	fmt.Println(s)
}
