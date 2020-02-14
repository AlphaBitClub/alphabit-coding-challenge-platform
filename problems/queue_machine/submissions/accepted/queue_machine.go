package main

import (
	"fmt"
	"strconv"
)

func find(queue []int, v int) int {
	for i, n := range queue {
		if v == n {
			return i
		}
	}
	return len(queue)
}

func main() {
	var cmdNumber int
	fmt.Scanf("%d", &cmdNumber)
	queue := make([]int, 0)
	ticketNumber := 0

	var cmd, arg string
	for i := 0; i < cmdNumber; i++ {
		fmt.Scanln(&cmd, &arg)
		switch cmd {
		case "NEW":
			ticketNumber++
			queue = append(queue, ticketNumber)
		case "CANCEL":
			orderNumber, _ := strconv.Atoi(arg)
			orderindex := find(queue, orderNumber)
			queue = append(queue[:orderindex], queue[orderindex+1:]...)
		case "SHOW":
			switch arg {
			case "FIRST":
				fmt.Println(queue[0])
			case "LAST":
				fmt.Println(queue[len(queue)-1])
			case "ALL":
				if len(queue) == 0 {
					fmt.Println(0)
				} else {
					for _, v := range queue[:len(queue)-1] {
						fmt.Printf("%d ", v)
					}
					fmt.Println(queue[len(queue)-1])
				}
			}
		case "NEXT":
			queue = queue[1:]
		}
	}
}
