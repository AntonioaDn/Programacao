# Programa para verificar se dois numeros binarios fornecem um checksum valido
# Um checksum valido é aquele que resulta em 11111111

x1, x2 = map(int, input("").split())

# Calcula o checksum
checksum = x1 + x2

# Verifica se o checksum é válido
if checksum == 11111111:
    print("SIM")
else:
    print("NAO")