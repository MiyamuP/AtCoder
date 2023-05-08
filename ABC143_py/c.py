from sys import stdin
input = stdin.readline
n = int(input())
s = input()

num = 1
bc = s[0]

for i in range(n)[1:]:
    if bc != s[i]:
        num = num+1

    bc = s[i]

print(num)
