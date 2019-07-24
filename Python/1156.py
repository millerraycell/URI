numerador = 1
denominador = 1
soma = 0
while numerador < 40:
    soma += numerador/denominador
    numerador += 2
    denominador *=2

print("%.2f" % soma)
