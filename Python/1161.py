def fat (x):
    valor = 1
    for i in range(1,x+1):
        valor*=i
    return valor;


while True:
    try:
        x = input()
        y = x.split()
        k = [int(i) for i in y]
        print(fat(k[0]) + fat(k[1]))
    except EOFError:
        break
        
 
