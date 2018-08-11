# Uses python3
def findCandidate(A):
    maj_index = 0
    count = 1
    for i in range(len(A)):
        if A[maj_index] == A[i]:
            count += 1
        else:
            count -= 1
        if count == 0:
            maj_index = i
            count = 1
    return A[maj_index]


# Function to check if the candidate occurs more than n/2 times
def isMajority(A, cand):
    count = 0
    for i in range(len(A)):
        if A[i] == cand:
            count += 1
    if count > len(A) / 2:
        return True
    else:
        return False


# Function to print Majority Element
def printMajority(A):
    # Find the candidate for Majority
    cand = findCandidate(A)

    # Print the candidate if it is Majority
    if isMajority(A, cand) == True:
        print("1")
    else:
        print("0")


# Driver program to test above functions
n = int(input())
A = list(map(int,input().split()))
printMajority(A)
