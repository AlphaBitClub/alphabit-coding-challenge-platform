package main

import (
	"fmt"
	"math/big"
)

func main() {
	// INPUT
	var n, i int
	var tmp int64
	fmt.Scanf("%d", &n)
	initCells := make([]*big.Int, n)
	for i = 0; i < n; i++ {
		fmt.Scanf("%d", &tmp)
		initCells[i] = big.NewInt(tmp)
	}

	// generate the nth tow pascal's triangle
	binomialCoeffs := make([]*big.Int, n)
	for i = 0; i < n; i++ {
		binomialCoeffs[i] = new(big.Int).Binomial(int64(n-1), int64(i))
	}

	// cell_1^coef_1 * cell_2^coef_2 * ... * cell_n^coef_n
	// the result must be % P
	P := big.NewInt(1000000007)
	x := new(big.Int) // tmp var
	finalCell := big.NewInt(1)
	for i = 0; i < n; i++ {
		finalCell.Mul(finalCell, x.Exp(initCells[i], binomialCoeffs[i], P))
		finalCell.Mod(finalCell, P)
	}

	// OUTPUT
	fmt.Println(finalCell.String())
}
