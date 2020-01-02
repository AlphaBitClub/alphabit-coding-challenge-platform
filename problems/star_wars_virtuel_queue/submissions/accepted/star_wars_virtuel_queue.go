package main

import "fmt"
import "strconv"

func main() {
	var n int
	fmt.Scan(&n)
	str := ""
	for i := n; i > 0; i-- {
		str += "1"
		fmt.Printf("%"+strconv.Itoa(n)+"0\n", str)
	}
}