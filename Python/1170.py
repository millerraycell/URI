quantidade = int(input())

while quantidade != 0:
    cont = 0
    comida = float(input())
    while comida/2 >= 1.0:
        comida /= 2
        cont+=1
    if comida != 1:
        cont+=1
    print("{} dias".format(cont))
    quantidade-=1
