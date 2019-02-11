package main

import (
	"fmt"
	"math/big"
)

func main() {
	// INPUT
	var n, k int
	fmt.Scanf("%d %d", &n, &k)

	// the kth coefficient of the nth row of pascal's triangle
	c := new(big.Int).Binomial(int64(n-1), int64(k-1))

	// the number of rabbits with the kth gene is c*k
	// the result must be % P
	K := big.NewInt(int64(k))
	kth_gene_rabbits_number := new(big.Int).Mul(c, K)

	// OUTPUT
	fmt.Println(kth_gene_rabbits_number.String())
}
