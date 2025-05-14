# https://vjudge.net/problem/CSES-1083 

qtd = int(input())
soma = (qtd * (qtd+1))/2
nros = map(int, input().split())

for i in nros:
    soma = soma - i

print(int(soma))