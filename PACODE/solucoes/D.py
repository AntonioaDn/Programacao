# Programa para retornar quantos divisores um numero tem:

n = int(input(""))
for i in range(n):
    num = aux = int(input(""))
    j = 1
    div = 0
    while j <= aux:
        if num % j == 0:
            div += 2
            if num/j == j:
                div -= 1
            aux = (num/j) - 1
        j += 1
    print(div)