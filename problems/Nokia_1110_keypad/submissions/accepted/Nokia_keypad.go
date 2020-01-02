package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {

	LETTERS := [][]byte{
		{'a', 'b', 'c'},
		{'d', 'e', 'f'},
		{'g', 'h', 'i'},
		{'j', 'k', 'l'},
		{'m', 'n', 'o'},
		{'p', 'q', 'r', 's'},
		{'t', 'u', 'v'},
		{'w', 'x', 'y', 'z'},
	}

	var length uint
	fmt.Scanf("%d", &length)

	reader := bufio.NewReader(os.Stdin)
	line, _ := reader.ReadString('\n')
	line = strings.Trim(line, "\n")

	sequence := strings.Split(line, " ")

	result := ""
	for _, letter_code := range sequence {
		if letter_code == "0" {
			result += " "
		} else {
			group_index, _ := strconv.Atoi(string(letter_code[0]))
			group_index -= 2
			group := LETTERS[group_index]
			letter_index := (len(letter_code) - 1) % len(group)
			result += string(group[letter_index])
		}
	}
	fmt.Println(result)
}
