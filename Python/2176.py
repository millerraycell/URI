k = input()
cont1=0
for i in range(len(k)):
    if k[i] == '1':
        cont1+=1
if cont1%2==0:
    k[len(k)] = '0'
else:
    k[len(k)] = '1'
print(k)
