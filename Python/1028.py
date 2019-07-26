def mdc(x,y):
    if y == 0:
        return x
    else:
        return mdc(y , x%y)


valor = int(input())

while valor != 0:
    k = input().split()
    x1,x2 = int(k[0]), int (k[1])
    print(mdc(x1,x2))
    
    valor-=1
    
