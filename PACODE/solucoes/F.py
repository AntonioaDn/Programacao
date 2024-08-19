n = int(input(""))
clientes = [list(map(int, input("").split())) for _ in range(n)]

hora_atual = clientes[0][0]
clientes_n_atendidos = 0

for i in range(n):
    tempo_chegada, tempo_atendimento, tempo_espera = clientes[i]
    if hora_atual > tempo_chegada + tempo_espera:
        clientes_n_atendidos += 1
        continue
    hora_atual = max(hora_atual, tempo_chegada) + tempo_atendimento

print(clientes_n_atendidos)