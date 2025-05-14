# https://codeforces.com/problemset/problem/992/A

zeros = False
size = input()
myset = set()

arr = map(int, input().split())

for i in arr:
    if i == 0:
        zeros = True
    myset.add(i)

print(len(myset) - 1) if zeros else print(len(myset))
