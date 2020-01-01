LETTERS = [
    ["a", "b", "c"], ["d", "e", "f"], ["g", "h", "i"], ["j", "k", "l"],
    ["m", "n", "o"], ["p", "q", "r", "s"], ["t", "u", "v"], ["w", "x", "y"]
]

input()
line = input()
sequence = line.split(" ")
result = ""
for letter_code in sequence:
    if letter_code == "0":
        result += " "
    else:
        group_index = int(letter_code[0])-2
        group = LETTERS[group_index]
        letter_index = (len(letter_code)-1) % len(group)
        result += group[letter_index]

print(result)
