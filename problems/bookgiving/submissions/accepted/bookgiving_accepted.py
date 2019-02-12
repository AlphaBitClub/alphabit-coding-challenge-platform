# two stacks: one for the books
# and the 2nd for tracking the best book in the 1st stack
book_stack = []
max_stack = []

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

        # if the stack is empy push the book directly in the max_stack
        # or if rating is higher than the current high rating
        # ">="" in order to print most recent one in the stack

        if (not max_stack) or rating >= max_stack[-1][1]:
            max_stack.append((book_name, rating))
        # else push the current high rating book
        # so always the max on the top of the stack
        else:
            max_stack.append(max_stack[-1])

    # Give Querie
    elif querie.startswith("Give"):
        book_stack.pop()
        max_stack.pop()

    # Best Querie
    elif querie.startswith("Best"):
        # O(1) Solution: the max is always on the top of the stack
        print("{} {}".format(*max_stack[-1]))
