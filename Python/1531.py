def fib (valor):
	if valor == 1:
		return 1
	elif valor == 2:
		return 1
	else:
		return fib(valor-1) + fib(valor-2)

while True:
	try:
		x = input()
		y = x.split()
		k = [int(i) for i in y]

		print("%d" % (fib(fib(k[0]))%k[1]))

	except EOFError:
		break

