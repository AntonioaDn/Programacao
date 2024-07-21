# Importações
import sympy as sp
import numpy as np
import pandas as pd
import plotly.express as px

def funcao(x):
    return x * np.log10(x) - 1

def TVM(x1, x2):
    return (funcao(x1) * funcao(x2)) < 0

def falsa_posicao(x1, x2, e):
    if not TVM(x1, x2):
        print(f"Não é possível afirmar que existe uma raiz no intervalo [{x1}, {x2}].")
        return 
    else:
        k = 0
        vm = (x1 * abs(funcao(x2)) + x2 * abs(funcao(x1)))/(abs(funcao(x1)) + abs(funcao(x2)))
        while abs(funcao(vm)) >= e:
            if TVM(x1, vm):
                x2 = vm
                vm = (x1 * abs(funcao(x2)) + x2 * abs(funcao(x1)))/(abs(funcao(x1)) + abs(funcao(x2)))
                k += 1
            else:
                x1 = vm
                vm = (x1 * abs(funcao(x2)) + x2 * abs(funcao(x1)))/(abs(funcao(x1)) + abs(funcao(x2)))
                k +=1
            
        return vm

print(falsa_posicao(2, 3, 0.002))