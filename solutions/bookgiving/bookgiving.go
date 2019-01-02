package main

import (
	"container/list"
	"fmt"
)

type Book struct {
	bookName string
	rating   int
}

func main() {
	var n, rating int
	var querie, bookName string
	var book Book

	bookStack := list.New()
	maxStack := list.New()

	fmt.Scanf("%d", &n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%s", &querie)
		switch querie {
		case "Add":
			fmt.Scanf("%s %d", &bookName, &rating)
			book = Book{bookName, rating}
			bookStack.PushFront(book)
			if top := maxStack.Front(); top == nil {
				maxStack.PushFront(book)
			} else if rating >= top.Value.(Book).rating {
				maxStack.PushFront(book)
			} else {
				maxStack.PushFront(maxStack.Front().Value)
			}
		case "Give":
			bookStack.Remove(bookStack.Front())
			maxStack.Remove(maxStack.Front())
		case "Best":
			book = maxStack.Front().Value.(Book)
			fmt.Println(book.bookName, book.rating)
		}
	}
}
