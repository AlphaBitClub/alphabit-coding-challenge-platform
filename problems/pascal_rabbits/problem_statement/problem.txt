Problem 7: Pascal's Rabbits
---

Statement
---
Pascal has a laboratory to study animals reproduction, right now he is doing some research on rabbits mating.
First, he took a sample of rabbits and put them in separate cells according to their breed.
Each two adjacent cells Ci that has X rabbits inside and Ci+1 that has Y rabbits inside will produce a new cell with X + Y rabbits where The X rabbits have Ci’s rabbits genes and the Y rabbits have Ci+1’s rabbits genes, and each new two adjacent cells will produce another cell and so on until we get one final cell.
Your job here is to help Pascal figure out how many rabbits will be on the final cell that have the genes of a given rabbit’s breed.
Note: Check the PDF version on the platform it has a colored example that explains the statement.

Input
---
initial cells, and K is the index of rabbits gene that we want to figure out how many they are in the final cell.
The 2nd line contains N space separated integers represent the number of rabbits in the initial cells.

Output
---
You will print a single line that contains the number of rabbits with the Kth gene in the final cell.
