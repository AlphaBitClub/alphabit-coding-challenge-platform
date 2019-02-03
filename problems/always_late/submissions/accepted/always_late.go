package main

import "fmt"

func main() {
	var n, t, c, d int
	// 1st line
	fmt.Scanf("%d %d %d %d", &n, &t, &c, &d)

	// the next n lines
	stations := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &stations[i])
	}

	// solve the equation tx = cx - cd
	// to find the moment where the car overtake the train
	x := (c - t) / (c * d / 60)
	// s is the the traveled distance
	s := t * x

	// note: list start at 0 but the station numbering starts from 1
	// if the stations[i] > s we should stop at stations[i-1]
	// the stations index is i, and station number is i+1
	// so we print i-1+1 => i
	for i := 1; i < n; i++ {
		if stations[i] > s {
			fmt.Println(i)
			break
		}
	}
}
