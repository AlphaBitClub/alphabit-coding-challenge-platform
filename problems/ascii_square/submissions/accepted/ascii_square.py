LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

x = input().strip()

x_index = LETTERS.index(x)
width = 2*x_index + 1
for i in range(width):
    line = ''
    for j in range(width):
        i_distance = abs(i - x_index)
        j_distance = abs(j - x_index)
        c_index = max(i_distance, j_distance)
        print(c_index)
        c = LETTERS[c_index]
        line += c

    print(line)
