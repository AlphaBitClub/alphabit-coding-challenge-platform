package main

import "fmt"

func main() {
	var flow, n_valves uint
	fmt.Scanf("%d", &flow)
	fmt.Scanf("%d", &n_valves)

	valves_bandwith := make([]uint, n_valves)
	delays := make([]uint, n_valves)
	results := make([]float32, n_valves)

	for i := uint(0); i < n_valves; i++ {
		fmt.Scanf("%d", &valves_bandwith[i])
	}

	delays[0] = 0
	for i := uint(1); i < n_valves; i++ {
		fmt.Scanf("%d", &delays[i])
	}

	results[0] = float32(flow) / float32(valves_bandwith[0])
	for i := uint(1); i < n_valves; i++ {
		delays[i] += delays[i-1]
		results[i] = float32(flow)/float32(valves_bandwith[i]) + float32(delays[i])
	}

	best_valve_index := 0
	best_valve := results[0]

	for i, v := range results {
		if v < best_valve {
			best_valve = v
			best_valve_index = i
		}
	}

	fmt.Println(best_valve_index + 1)
}
