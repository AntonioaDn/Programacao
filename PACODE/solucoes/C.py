# Programa para verificar se dois numeros binarios fornecem um checksum valido
# Um checksum valido é aquele que resulta em 11111111

x1, x2 = input("").split()

x1 = int(x1, 2)
x2 = int(x2, 2)

if x1 + x2 == 255:
    print('SIM')
else:
    print('NAO')