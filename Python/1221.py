quantidade = int(input())

while quantidade != 0:
    numero = int(input())
    i = 2
    divisores = 0
    while i <= numero/2:
        if numero % i == 0:
            divisores+=1
        i+=1

    if divisores == 0:
        print("Prime")
    else:
        print("Not Prime")
    quantidade-=1
