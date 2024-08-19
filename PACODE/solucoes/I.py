n, k = map(int, input("").split())
impares = pares = 0
if n%2 == 0:
    impares = pares = n/2
else:
    impares = (int(n/2)) + 1
    pares = impares - 1
if k <= impares:
    resp = 1
    for i in range(2, k+1):
        resp += 2
    print(resp)
else:
    resp = 2
    for i in range(2, k-impares+1):
        resp += 2
    print(resp)
