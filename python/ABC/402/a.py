n = int(input())
a = [int(x) for x in input().split()]
sum = 0
for i in range(n):
    if i % 2 == 0:
        sum += a[i]
print(sum)
