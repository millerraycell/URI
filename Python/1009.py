nome = input()
salario = eval(input())
vendas = eval(input())

porcentagem = (15*vendas)/100
print("TOTAL = R$ %.2f" %(salario+porcentagem))
