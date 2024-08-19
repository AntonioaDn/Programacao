n = int(input(""))
m = []
for i in range(n):
    linha = list(map(int, input("").split()))
    m.append(linha)

clientes_nao_atendidos = 0
hora_atual = m[0][0]
for i in range(n):
    if hora_atual+m[i][1] > m[i][2]:
        clientes_nao_atendidos += 1
        continue
    hora_atual += m[i][1] 

print(clientes_nao_atendidos)
    