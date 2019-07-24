diametro = float
altura = float
volume = float
area = float
while True:
  try:
      volume = float(input())
      diametro = float(input())
      area = ((diametro/2)**2)*3.14
      altura = volume/area
      print("ALTURA = {:.2f}".format(altura))
      print("AREA = {:.2f}".format(area))
  except EOFError:
    break
