letters = [["a","b","c"],["d","e","f"],["g","h","i"],["j","k","l"],["m","n","o"],["p","q","r","s"],["t","u","v"],["w","x","y"]]
input()
line = input()
words = line.split(" ")
result = ""
for word in words:
    group = letters[int(word[0])-2]
    result += " " if word == "0" else group[(len(word)-1) % len(group)]
    
print(result)