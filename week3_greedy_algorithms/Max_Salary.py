# Uses python3
n = int(input())
A = list(map(int,input().split()))
for i in range(len(A)-1):
    for j in range(i+1,len(A)):
        if(int(str(A[i])+str(A[j])) < int(str(A[j])+str(A[i]))):
            A[i], A[j] = A[j], A[i]
for i in A:
    print(i,end='')