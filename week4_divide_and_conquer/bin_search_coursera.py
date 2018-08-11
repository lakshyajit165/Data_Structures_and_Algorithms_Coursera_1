# Uses python3
def bin_search(a,l,r,x):

    if(r >= l):
        mid = l + (r-l)//2

        if(a[mid] == x):
            return(mid)
        elif(a[mid] > x):
            return(bin_search(a,l,mid-1,x))
        else:
            return(bin_search(a,mid+1,r,x))
    else:
        return(-1)
A = list(map(int,input().split()))
B = list(map(int,input().split()))
n = A[0]
q = B[0]
A.remove(A[0])
B.remove(B[0])
for i in B:
    print(bin_search(A,0,n-1,i),end = ' ')
