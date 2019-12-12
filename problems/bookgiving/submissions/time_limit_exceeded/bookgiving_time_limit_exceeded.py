from operator import itemgetter


# a stack to store the books
book_stack = []

# first line contains N
n = int(input())

# for each N lines
for _ in range(n):
    # read the querie type and apply each
    querie = input()

    # Add <book_name> <rating> querie
    if querie.startswith("Add"):
        _, book_name, rating = querie.split()
        rating = int(rating)
        # push the book in the book_stack
        book_stack.append((book_name, rating))

    # Give Querie
    elif querie.startswith("Give"):
        book_stack.pop()

    # Best Querie
    elif querie.startswith("Best"):
        # Naive O(n) Solution:
        # find the the book with the highest rating for each querie
        best_book = max(book_stack, key=itemgetter(1))
        # print "<book_name> <rating>"
        print("{} {}".format(*best_book))
