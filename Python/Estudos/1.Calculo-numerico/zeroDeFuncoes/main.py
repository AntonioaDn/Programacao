# Importações
import sympy as sp
import numpy as np
import pandas as pd
import plotly.express as px


# Funcao que será usada para calcular as raízes
def funcao(x):
    if x is None or x <= 0:
        raise ValueError("x deve ser um número maior que 0 para calcular log10(x)")
    return x * np.log10(x) - 1
  # x^4 - 3x^3 + 2

# Area que sera criada a tabela.

tabela_bisseccao = pd.DataFrame(columns=['k', 'ak', 'bk', 'f(ak)', 'f(bk)', 'x k+1', 'f(x k+1)'])

tabela_falsa_posicao = pd.DataFrame(columns=['k', 'ak', 'bk', 'f(ak)', 'f(bk)', 'x k+1', 'f(x k+1)'])

def adiciona_linhas(tabela, k, ak, bk, fak, fbk, xk_1, fxk_1):
    nova_linha = pd.DataFrame({
        'k': [k],
        'ak': [ak],
        'bk': [bk],
        'f(ak)': [fak],
        'f(bk)': [fbk],
        'x k+1': [xk_1],
        'f(x k+1)': [fxk_1]
    })
    return pd.concat([tabela, nova_linha], ignore_index=True)

#

# TVM (Teorema do Valor Medio)
def TVM(x1, x2):
    return funcao(x1) * funcao(x2) < 0

# Teorema da bissecccao:
def bissec(x1, x2, e):
    if not TVM(x1, x2):
        print("Não é possível afirmar que existe uma raiz nesse intervalo.")
        return None
    else:
        global tabela_bisseccao 
        k = 0
        vm = (x1 + x2) / 2
        tabela_bisseccao = adiciona_linhas(tabela_bisseccao, k, x1, x2, funcao(x1), funcao(x2), vm, funcao(vm))

        while abs(funcao(vm)) >= e:
            if TVM(x1, vm):
                x2 = vm
                vm = (x1 + x2) / 2
                k += 1
                tabela_bisseccao = adiciona_linhas(tabela_bisseccao, k, x1, x2, funcao(x1), funcao(x2), vm, funcao(vm))
            else:
                x1 = vm
                vm = (x1 + x2) / 2
                k += 1
                tabela_bisseccao = adiciona_linhas(tabela_bisseccao, k, x1, x2, funcao(x1), funcao(x2), vm, funcao(vm))
    return vm

# Teorema da falsa posição:
def falsa_posicao(x1, x2, e):
    global tabela_falsa_posicao
    if not TVM(x1, x2):
        print(f'Não é possível determinar que existe uma raíz no intevalo [{x1}, {x2}]')
        return None
    else:
        k = 0
        vm = ((x1 * abs(funcao(x2))) + (x2 * abs(funcao(x1))))/(abs(funcao(x1)) + abs(funcao(x2)))
        tabela_falsa_posicao = adiciona_linhas(tabela_falsa_posicao, k, x1, x2, funcao(x1), funcao(x2), vm, funcao(vm))
        if funcao(vm) < e:
            return
        else:
            while abs(funcao(vm)) >= e:
                print(f'Iteração {k}º.')
                if TVM(x1, vm):
                    k += 1
                    x2 = vm
                    vm = ((x1 * abs(funcao(x2))) + (x2 * abs(funcao(x1))))/(abs(funcao(x1)) + abs(funcao(x2)))
                    tabela_falsa_posicao = adicxiona_linhas(tabela_falsa_posicao, k, x1, x2, funcao(x1), funcao(x2), vm, funcao(vm))
                else:
                    k += 1
                    x1 = vm
                    vm = ((x1 * abs(funcao(x2))) + (x2 * abs(funcao(x1))))/(abs(funcao(x1)) + abs(funcao(x2)))
                    tabela_falsa_posicao = adiciona_linhas(tabela_falsa_posicao, k, x1, x2, funcao(x1), funcao(x2), vm, funcao(vm))
    return vm            

xn = falsa_posicao(2, 3, 0.002)
print(f"{xn:}")
print(tabela_falsa_posicao)