# Uses python3
def get_fibonacci_last_digit(n):
    a, b = 0, 1
    for i in range(n):
        a, b = b % 10, ((a + b) % 10)
    return a

n = int(input())
print(get_fibonacci_last_digit(n))