n = int(input())
mat = []
cont = 1
aux = 1
for i in range(0,n+1):
    linha = []
    for j in range(0,n+1):
        linha.append(cont)
        cont *= 2
    cont = aux*2
    aux *= 2
    mat.append(linha)

for i in range(0,n+1):
    for j in range (0,n+1):
        print(mat[i][j],end = "\t")
    print("\r")
    
