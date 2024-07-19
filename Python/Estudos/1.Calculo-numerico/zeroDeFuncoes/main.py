# Importações
import sympy as sp
import numpy as np
import pandas as pd
import plotly.express as px


# Funcao que será usada para calcular as raízes
def funcao(x):
  return x**4 - 3*(x**3) + 2
  # x^4 - 3x^3 + 2

# Area que sera criada a tabela.
x = np.linspace(-10, 10, 400)
y = funcao(x)

tabela_bisseccao = pd.DataFrame(columns=['k', 'ak', 'bk', 'f(ak)', 'f(bk)', 'x k+1', 'f(x k+1)'])

#

# TVM (Teorema do Valor Medio)
def TVM(x1, x2):
    return funcao(x1) * funcao(x2) < 0

# Teorema da bissecccao:
def bissec(x1, x2, e):
  if not TVM(x1, x2):
    print("Não é possível afirmar que existe uma raiz nesse intervalo.")
    return
  else:
    global tabela_bisseccao 
    k = 0
    vm = (x1 + x2) / 2
    nova_linha = pd.DataFrame({
        'k': [k],
        'ak': [x1],
        'bk': [x2],
        'f(ak)': [funcao(x1)],
        'f(bk)': [funcao(x2)],
        'x k+1': [vm],
        'f(x k+1)': [funcao(vm)]
    })
    tabela_bisseccao = pd.concat([tabela_bisseccao, nova_linha], ignore_index=True)

    while abs(funcao(vm)) >= e:
      if TVM(x1, vm):
        x2 = vm
        vm = (x1 + x2) / 2
        k += 1
        nova_linha = pd.DataFrame({
        'k': [k],
        'ak': [x1],
        'bk': [x2],
        'f(ak)': [funcao(x1)],
        'f(bk)': [funcao(x2)],
        'x k+1': [vm],
        'f(x k+1)': [funcao(vm)]
        })
        tabela_bisseccao = pd.concat([tabela_bisseccao, nova_linha], ignore_index=True)
      else:
        x1 = vm
        vm = (x1 + x2) / 2
        k += 1
        nova_linha = pd.DataFrame({
        'k': [k],
        'ak': [x1],
        'bk': [x2],
        'f(ak)': [funcao(x1)],
        'f(bk)': [funcao(x2)],
        'x k+1': [vm],
        'f(x k+1)': [funcao(vm)]
        })
        tabela_bisseccao = pd.concat([tabela_bisseccao, nova_linha], ignore_index=True)

    return vm

# Teorema da falsa posição:


x1, x2 = map(float, input("Digite o intervalo [x1, x2]: ").split())
e = float(input("Digite o criterio de parada: "))
xz = bissec(x1, x2, e)
print(f"O valor proximo ao criterio de parada eh: {xz}")
print(tabela_bisseccao)