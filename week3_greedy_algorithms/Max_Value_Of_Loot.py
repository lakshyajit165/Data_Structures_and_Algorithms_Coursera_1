# Uses python3
def fractional_knapsack(value,weight,W):

    # index = [0, 1, 2, ..., n - 1] for n items
    index = list(range(len(value)))

    # contains ratios of values to weight
    ratio = [v / w for v, w in zip(value, weight)]

    # index is sorted according to value-to-weight ratio in decreasing order
    index.sort(key=lambda i: ratio[i], reverse=True)

    max_value = 0

    for i in index:
        if weight[i] <= W:
            max_value += value[i]
            W -= weight[i]
        else:
            max_value += value[i] * W / weight[i]
            break
    return max_value
n,W = map(int,input().split())
value = []
weight = []
while(n!=0):
    a,b = map(int,input().split())
    value.append(a)
    weight.append(b)
    n-=1
max_value = fractional_knapsack(value,weight,W)
print("{:.4f}".format(max_value))