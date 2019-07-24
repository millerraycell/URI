x = input()
a = x.split()
if int(a[1])<int(a[0]):
    print("Eu odeio a professora!")

else:
    if int(a[1])-int(a[0])>3:
        print("Muito bem! Apresenta antes do Natal!")

    if int(a[1])-int(a[0])<3:
        print("Parece o trabalho do meu filho!")
        if int(a[1])+2<=24:
            print("TCC Apresentado!")
        else:
            print("Fail! Entao eh nataaaaal!")


