from sys import stdin
input = stdin.readline
n = int(input().rstrip())
d = list(map(int, input().rstrip().split()))

sum = 0

for i in range(n):
    for j in range(n):
        if i < j:
            sum = sum + d[i]*d[j]

print(sum)
