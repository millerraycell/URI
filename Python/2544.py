while True:
    try:
        x = int(input())
        cont = 0
        while x != 1:
            x/=2
            cont+=1
        print(cont)
    except EOFError:
        break
        
