Problem 7: Books Giving
---

Statement
---
Hichem is a bookworm, each time he reads a book he rates it and puts it on the top of his bookshelf.
Hichem always exchanges his books with his friends, each time a friend asks him for a book he gives him the last book he read (the one on the top of his bookshelf).
Hichem also talks a lot about books with his friends, sometimes they ask him for the best book available on his books shelf, so he need to tell them about its name and his rating.

Input
---
The 1st line contains an integer N the number of queries.
The next N lines, each one contains a query.
Queries are : Add, Give, Best.
“Add book_name rating” : Hichem puts that book on the top of his bookshelf.
“Give” : Hichem gives the book on the top to his friend.
“Best” : Hichem tells the name and the rating of the highest rated book available on his bookshelf to his friends.
Note: We guarantee that each book has a unique name and rating.
Note: We also guarantee that the queries “Give” and “Best” never occur when there is no book available on Hichem’s bookshelf.

Output
---
For each “Best” query you need to print the name and the rating of the highest rated book available on Hichem’s bookshelf.
