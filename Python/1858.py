numero = int(input())
k = input().split()
pessoas = [int(i) for i in k]

matador = min(pessoas)

indice = 0

for i in range(numero):
    if pessoas[i] == matador:
        indice = i
        break

indice += 1

print(indice)
