# https://codeforces.com/problemset/problem/1238/A

cases = int(input())

for i in range(cases):
    a, b = map(int, input().split())
    
    if a % 2 == 0 and b % 2 == 0:
        print("YES")

    elif (a % 2 == 1 and b % 2 == 0) or (a % 2 == 0 and b % 2 == 1):
        if a - b >= 2:
            print("YES")
        else:
            print("NO")
    
    else:
        print("YES")