import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import sympy as sp

# 1. Carregando os dados de temperatura
url = "GlobalLandTemperaturesByState.csv"
dados = pd.read_csv(url)

# 2. Filtrando os dados para o estado da Paraíba
dados_pb = dados[dados['State'] == 'Paraíba']

# 3. Selecionando as colunas de interesse: data e temperatura média
dados_pb['dt'] = pd.to_datetime(dados_pb['dt'])
dados_pb = dados_pb.rename(columns={'dt': 'Date', 'AverageTemperature': 'Temperature'})
dados_pb = dados_pb[['Date', 'Temperature']]

# 4. Filtrando os dados para a semana de 5 a 9 de agosto de 2023, exceto o dia 7 de agosto
mascara = (dados_pb['Date'] >= '2023-08-05') & (dados_pb['Date'] <= '2023-08-09')
dados_selecionados = dados_pb[mascara]
dados_selecionados = dados_selecionados[dados_selecionados['Date'] != '2023-08-07']

datas_selecionadas = dados_selecionados['Date']
temperaturas_selecionadas = dados_selecionados['Temperature']

# 5. Convertendo as datas para números inteiros (dias desde 5 de agosto de 2023)
dias = (datas_selecionadas - datas_selecionadas.min()).dt.days

# 6. Função para realizar a interpolação polinomial de Lagrange
def interpolacao_lagrange(x, y):
    n = len(x)
    simbolo_x = sp.symbols('x')
    polinomio = 0
    for i in range(n):
        termo = y[i]
        for j in range(n):
            if i != j:
                termo *= (simbolo_x - x[j]) / (x[i] - x[j])
        polinomio += termo
    return sp.simplify(polinomio)

# 7. Função para realizar a interpolação polinomial de Newton
def interpolacao_newton(x, y):
    n = len(x)
    coeficientes = np.zeros([n, n])
    coeficientes[:, 0] = y
    for j in range(1, n):
        for i in range(n - j):
            coeficientes[i][j] = (coeficientes[i + 1][j - 1] - coeficientes[i][j - 1]) / (x[i + j] - x[i])
    simbolo_x = sp.symbols('x')
    polinomio = coeficientes[0, 0]
    produto = 1
    for i in range(1, n):
        produto *= (simbolo_x - x[i - 1])
        polinomio += coeficientes[0, i] * produto
    return sp.simplify(polinomio)

# 8. Realizando a interpolação com ambos os métodos
polinomio_lagrange = interpolacao_lagrange(dias, temperaturas_selecionadas)
polinomio_newton = interpolacao_newton(dias, temperaturas_selecionadas)

# 9. Exibindo os polinômios encontrados
print(f"Polinômio de Lagrange: {polinomio_lagrange}")
print(f"Polinômio de Newton: {polinomio_newton}")

# 10. Simulando um dia onde não há dado disponível (7 de agosto de 2023)
dia_faltante = 2  # 7 - 5 = 2 dias desde 5 de agosto
temp_lagrange = polinomio_lagrange.evalf(subs={sp.symbols('x'): dia_faltante})
temp_newton = polinomio_newton.evalf(subs={sp.symbols('x'): dia_faltante})

print(f"Previsão de temperatura em 7 de agosto pelo polinômio de Lagrange: {temp_lagrange}")
print(f"Previsão de temperatura em 7 de agosto pelo polinômio de Newton: {temp_newton}")

# 11. Plotando os gráficos dos polinômios e dos dados reais
x_plot = np.linspace(min(dias), max(dias), 500)
y_lagrange = [polinomio_lagrange.evalf(subs={sp.symbols('x'): xi}) for xi in x_plot]
y_newton = [polinomio_newton.evalf(subs={sp.symbols('x'): xi}) for xi in x_plot]

plt.figure(figsize=(10, 6))
plt.plot(x_plot, y_lagrange, label='Interpolação de Lagrange', color='blue')
plt.plot(x_plot, y_newton, label='Interpolação de Newton', color='red')
plt.scatter(dias, temperaturas_selecionadas, color='black', label='Dados Reais')
plt.scatter(dia_faltante, temp_lagrange, color='blue', marker='x', s=100, label='Previsão Lagrange')
plt.scatter(dia_faltante, temp_newton, color='red', marker='x', s=100, label='Previsão Newton')
plt.legend()
plt.xlabel('Dias desde 5 de agosto de 2023')
plt.ylabel('Temperatura (°C)')
plt.title('Interpolação Polinomial das Temperaturas na Paraíba')
plt.show()