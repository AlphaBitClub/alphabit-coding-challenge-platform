mountains = []
altitude = 9
result = ''
lost = False

mountains.extend(map(int, input().split(" ")))
# # game loop
for _ in range(8):
    # destroy the highest tower
    index_max = max(range(len(mountains)), key=mountains.__getitem__)
    # The index of the tower to fire on.
    result += str((index_max)+1) + " "
    # look ahead
    lookAhead = max(range(len(mountains)), key=mountains.__getitem__)
    if(mountains[lookAhead] > altitude):
        lost = True
        break
    # crash the tower
    mountains[index_max] = 0
    altitude -= 1
if lost:
    print("Hogwarts is down")
else:
    print(result)
