# Uses python3
A = [10,5,1]
B = []
count = 0
val = int(input())
for i in A:
    while(val >= i):
        val-=i
        count+=1
        B.append(i)
print(count)
#print(B)
