# Uses python3
def calc_fib(n):
    if (n <= 1):
        return n
    else:
        A = list(0*n for i in range(n+1))
        A[0] = 0
        A[1] = 1
        for i in range(2,n+1):
            A[i] = A[i-1]+A[i-2]
        return(A[n])

n = int(input())
print(calc_fib(n))
