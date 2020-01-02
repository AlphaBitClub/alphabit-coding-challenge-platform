n = int(input())

for i in range(1,n+1):
    print("0"* (n-i) + "1" * i )

## other solution ; 
# for i in  reversed(range(n)):
#     print ("0" * (i) + "1"*(n-i) )

