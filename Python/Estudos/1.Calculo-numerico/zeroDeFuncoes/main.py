# Importações
import sympy as sp
import numpy as np
import pandas as pd
import plotly.express as px

# Funcao que será usada para calcular as raízes
def funcao(x):
  return x**4 - 3*(x**3) + 2
  # x^4 - 3x^3 + 2

# TVM (Teorema do Valor Medio)
def TVM(x1, x2):
  if funcao(x1)*funcao(x2) < 0:
    return True
  else:
    return False

# Teorema da bissecccao:
def bissec(x1, x2, e):
  if not TVM(x1, x2):
    print("Não é possível afirmar que existe uma raiz nesse intervalo.")
    return
  else:
    k = 0
    print(f"k | ak | bk | f(ak) | f(bk) | x k+1 | f(x k+1)")
    vm = (x1 + x2) / 2
    while abs(funcao(vm)) >= e:
      if TVM(x1, vm):
        x2 = vm
        vm = (x1 + x2) / 2
        print(f"{k} | {x1} | {x2} | {funcao(x1)} | {funcao(x2)} | {vm} | {funcao(vm)}")
        k += 1
      else:
        x1 = vm
        vm = (x1 + x2) / 2
        print(f"{k} | {x1} | {x2} | {funcao(x1)} | {funcao(x2)} | {vm} | {funcao(vm)}")
        k += 1
    return vm

x1, x2 = map(float, input("Digite o intervalo [x1, x2]: ").split())
e = float(input("Digite o criterio de parada: "))
xz = bissec(x1, x2, e)
print(f"O valor proximo ao criterio de parada eh: {xz}")