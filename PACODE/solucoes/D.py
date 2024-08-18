# Programa para retornar quantos divisores um numero tem:

n = int(input(""))
for i in range(n):
    numero = int(input(""))
    divisores = 0
    for j in range(1, numero+1):
        if numero%j == 0:
            divisores += 1
    print(divisores)
