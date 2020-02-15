f = open("6.in", "w")
strr = ''
for i in range(100000):
    strr += str(i) + ' '
strr += str(10)
f.write(strr)

f.close()