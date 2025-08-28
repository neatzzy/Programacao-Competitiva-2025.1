# https://codeforces.com/problemset/problem/992/A

zeros = False
size = input()
myset = set()

arr = map(int, input().split())

for i in arr:
    myset.add(i)

print(len(myset) - 1) if 0 in myset else print(len(myset))
