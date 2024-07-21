# Importações
import sympy as sp
import numpy as np
import pandas as pd
import plotly.express as px

# Area de criar a tabela.
tabela_falsa_posicao = pd.DataFrame(columns=['k', 'ak', 'bk', 'f(ak)', 'f(bk)', 'x k+1', 'f(x k+1)'])

def funcao(x):
    return x * np.log10(x) - 1

def TVM(x1, x2):
    return (funcao(x1) * funcao(x2)) < 0

def falsa_posicao(x1, x2, e):
    global tabela_falsa_posicao
    if not TVM(x1, x2):
        print(f"Não é possível afirmar que existe uma raiz no intervalo [{x1}, {x2}].")
        return 
    else:
        k = 0
        vm = (x1 * abs(funcao(x2)) + x2 * abs(funcao(x1)))/(abs(funcao(x1)) + abs(funcao(x2)))
        nova_linha = pd.DataFrame({'k': [k], 'ak': [x1], 'bk': [x2], 'f(ak)': [funcao(x1)], 'f(bk)': [funcao(x2)],
                    'x k+1': [vm], 'f(x k+1)': [funcao(vm)]})
        tabela_falsa_posicao = tabela_falsa_posicao._append(nova_linha, ignore_index=True)
        while abs(funcao(vm)) >= e:
            if TVM(x1, vm):
                x2 = vm
                vm = (x1 * abs(funcao(x2)) + x2 * abs(funcao(x1)))/(abs(funcao(x1)) + abs(funcao(x2)))
                k += 1
                nova_linha = pd.DataFrame({'k': [k], 'ak': [x1], 'bk': [x2], 'f(ak)': [funcao(x1)], 'f(bk)': [funcao(x2)],
                            'x k+1': [vm], 'f(x k+1)': [funcao(vm)]})
                tabela_falsa_posicao = tabela_falsa_posicao._append(nova_linha, ignore_index=True)

            else:
                x1 = vm
                vm = (x1 * abs(funcao(x2)) + x2 * abs(funcao(x1)))/(abs(funcao(x1)) + abs(funcao(x2)))
                k +=1
                nova_linha = pd.DataFrame({'k': [k], 'ak': [x1], 'bk': [x2], 'f(ak)': [funcao(x1)], 'f(bk)': [funcao(x2)],
                            'x k+1': [vm], 'f(x k+1)': [funcao(vm)]})
                tabela_falsa_posicao = tabela_falsa_posicao._append(nova_linha, ignore_index=True)

        return vm

print(falsa_posicao(2, 3, 0.002))
print(tabela_falsa_posicao)