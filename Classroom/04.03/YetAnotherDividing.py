# https://codeforces.com/problemset/problem/1249/A

cases = int(input())

for i in range(cases):
    qty = int(input())

    students = map(int, input().split())

    flag =  False

    students = list(students)

    for j in range(qty):
        if flag:
            print("2")
            break
        for k in range(j, qty):
            if abs(students[j] - students[k]) == 1:
                flag = True
                break
    
    if not flag:
        print("1")
