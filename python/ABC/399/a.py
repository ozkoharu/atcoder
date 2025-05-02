from collections import Counter
n = int(input())
s = list(input())
t = list(input())

count = 0
for i in range(n):
    if (s[i] != t[i]):
        count += 1
    
print(count)
