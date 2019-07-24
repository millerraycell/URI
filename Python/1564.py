while True:
    try:
        x = int(input())
        mat = []
        for i in range (x):
            k = []
            for j in range(x):
                if i+j == x-1:
                    k.append(2)
                elif i == j:
                    k.append(1)
                else:
                    k.append(3)
            mat.append(k)
        for i in range(x):
            for j in range(x):
                print("{}".format(mat[i][j]),end='')
            print()
    except EOFError:
        break;
