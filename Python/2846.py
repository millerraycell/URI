x = int(input())

fib = []
numeros = list(range(10**5))
a = 0
b = 1

for i in range (10**5):
    auxiliar = a + b
    a = b
    b = auxiliar
    fib.append(auxiliar)

for i in range(10**5):
    if fib[i] == numeros[i]:
       del numeros[fib[i]] 
print(numeros[x])
    
