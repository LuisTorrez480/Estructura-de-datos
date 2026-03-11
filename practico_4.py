def sumador(n):
  if (n==0):
    return 0
  else:
     return n + sumador(n-1)


def factorial(n):
    if n==0 or n==1:
        return 1
    else:
        return n*factorial(n-1)

def potencia(base,exponente):
  if exponente==0:
      return 1
  else:
        return base * potencia(base,exponente-1)

opcion=-1
while(opcion!=0):    
  print("MENU")
  print("1.-sumador")
  print("2.-factorial")
  print("3.-potencia")
  print("0.-salir")
  opcion=int(input("ingrese el numero:"))
  if (opcion==1):
    n=int(input("ingrsar el numero:"))
    print("la suma del numero es: ",sumador(n))
  elif(opcion==2):
        n=int(input("ingrese el numero: "))
        print("el factorial es:",factorial(n))
  elif(opcion==3):
        base=int(input("ingrese el numero:"))
        exponente=int(input("ingrese el potencia:"))
        print("la potencia del numero es:",potencia(base,exponente))
  elif(opcion==0):
        print("el programa cerro")
  else:
        print("opcion invalida")
