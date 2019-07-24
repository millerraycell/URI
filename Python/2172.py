while(1):
    x = input()
    y = x.split()
    k = [int(i) for i in y]
    if k[0] == 0 and k[1] == 0:
        break;
    else:
        print(k[0]*k[1])
