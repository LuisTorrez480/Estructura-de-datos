def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n - 1)

def sumador(n):
    if n == 0:
        return 0
    return n + sumador(n - 1)

def convertir_base(n, b):
    if n < b:
        return n
    return convertir_base(n / b, b) * 10 + (n % b)

print("Menu")
print("Presione 1 para calcular factorial")
print("Presione 2 para sumar hasta n")
print("Presione 3 para convertir a base x")
print("Presione 0 para salir")

opcion = int(input("Elige una opcion: "))

if opcion == 1:
    n = int(input("Escribe el numero: "))
    print("El factorial es:", factorial(n))

elif opcion == 2:
    n = int(input("Escribe el numero: "))
    print("La suma es:", sumador(n))

elif opcion == 3:
    n = int(input("Escribe el numero: "))
    b = int(input("Escribe la base: "))
    print("El numero convertido es:", convertir_base(n, b))

elif opcion == 0:
    print("Saliendo del programa...")

else:
    print("Opcion no valida")
