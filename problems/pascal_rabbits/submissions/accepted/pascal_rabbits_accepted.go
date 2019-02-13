package main

import (
	"fmt"
	"math/big"
)

func main() {
	// INPUT
	var n, k int
	fmt.Scanf("%d %d", &n, &k)

	init_cells := make([]*big.Int, n)
	for i := 0; i < n; i++ {
		var tmp int64
		fmt.Scanf("%d", &tmp)
		init_cells[i] = new(big.Int).SetInt64(tmp)
	}

	// the kth coefficient of the nth row of pascal's triangle
	c := new(big.Int).Binomial(int64(n-1), int64(k-1))

	// the number of rabbits with the kth gene is c*init_cells[k-1]
	kth_gene_rabbits_number := new(big.Int).Mul(c, init_cells[k-1])

	// OUTPUT
	fmt.Println(kth_gene_rabbits_number.String())
}
