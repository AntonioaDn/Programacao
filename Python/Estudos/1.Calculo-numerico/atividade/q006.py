#Importacoes
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Criação da tabela
tabela_falsa_posicao = pd.DataFrame(columns=['k', 'ak', 'bk', 'f(ak)', 'f(bk)', 'x k+1', 'f(x k+1)'])

def plotar_funcao(f, a, b, titulo):
    
    x = np.linspace(a, b, 400)
    y = f(x)
    plt.figure(figsize=(10, 6))
    plt.plot(x, y, label='f(x)')
    plt.axhline(0, color='black', linewidth= 0.5)
    plt.axvline(0, color='black', linewidth= 0.5)
    plt.title(titulo)
    plt.legend()
    plt.grid(True)
    plt.show()

def f(x):
    return 10 - 15 * ((np.exp(-0.1 * x) - np.exp(-0.5 * x))) - 4

def TVM(x1, x2):
    return f(x1) * f(x2) < 0

def falsa_posicao(x1, x2, e):
    global tabela_falsa_posicao
    if not TVM(x1, x2):
        print("Não é possível afirmar que existe uma raiz nesse intervalo.")
        return
    else:
        k = 0
        vm = (x1 * abs(f(x2)) + x2 * abs(f(x1)))/(abs(f(x1)) + abs(f(x2)))
        nova_linha = pd.DataFrame({'k': [k], 'ak':[x1], 'bk':[x2], 'f(ak)':[f(x1)], 'f(bk)':[f(x2)], 'x k+1':[vm], 'f(x k+1)': [f(vm)]})
        tabela_falsa_posicao = pd.concat([tabela_falsa_posicao, nova_linha], ignore_index=True)

        while abs(f(vm)) >= e:
            k += 1
            if TVM(x1, vm):
                x2 = vm
                vm = (x1 * abs(f(x2)) + x2 * abs(f(x1)))/(abs(f(x1)) + abs(f(x2)))
                nova_linha = pd.DataFrame({'k': [k], 'ak':[x1], 'bk':[x2], 'f(ak)':[f(x1)], 'f(bk)':[f(x2)], 'x k+1':[vm], 'f(x k+1)': [f(vm)]})
                tabela_falsa_posicao = pd.concat([tabela_falsa_posicao, nova_linha], ignore_index=True)

            else:
                x1 = vm
                vm = (x1 * abs(f(x2)) + x2 * abs(f(x1)))/(abs(f(x1)) + abs(f(x2)))
                nova_linha = pd.DataFrame({'k': [k], 'ak':[x1], 'bk':[x2], 'f(ak)':[f(x1)], 'f(bk)':[f(x2)], 'x k+1':[vm], 'f(x k+1)': [f(vm)]})
                tabela_falsa_posicao = pd.concat([tabela_falsa_posicao, nova_linha], ignore_index=True)

    
    return vm

def main():
    f = lambda x: 10 - 15 * ((np.exp(-0.1 * x) - np.exp(-0.5 * x)))
    # plotar_funcao(f, -20, 20, 'Função v = u.ln(M0 / M0 - c.t) + g.t')
    x1 = 1
    x2 = 2
    e = 0.00000001
    vm = falsa_posicao(x1, x2, e)
    print(vm)
    print(tabela_falsa_posicao)

if __name__ == "__main__":
    main()