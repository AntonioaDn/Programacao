import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

# Area da criacao da tabela
tabela_bissec = pd.DataFrame(columns=['k', 'ak', 'bk', 'f(ak)', 'f(bk)', 'x k+1', 'f(x k+1)'])

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
    return 200 * np.log(1600/(1600 - (27 * x))) + 9.8 * x - 100


def TVM(x1, x2):
    return (f(x1) * f(x2)) < 0

def bissec(x1, x2, e):
    global tabela_bissec
    k = 0
    vm = (x1 + x2) / 2
    nova_linha = pd.DataFrame({'k': [k], 'ak':[x1], 'bk':[x2], 'f(ak)':[f(x1)], 'f(bk)':[f(x2)], 'x k+1':[vm], 'f(x k+1)': [f(vm)]})
    tabela_bissec = pd.concat([tabela_bissec, nova_linha], ignore_index=True)
    
    while abs(f(vm)) >= e:
        
        if TVM(x1, vm):
            x2 = vm
            vm = (x1 + x2) / 2
            k+=1
            nova_linha = pd.DataFrame({'k': [k], 'ak':[x1], 'bk':[x2], 'f(ak)':[f(x1)], 'f(bk)':[f(x2)], 'x k+1':[vm], 'f(x k+1)': [f(vm)]})
            tabela_bissec = pd.concat([tabela_bissec, nova_linha], ignore_index=True)
        else:
            x1 = vm
            vm = (x1 + x2) / 2
            k+=1
            nova_linha = pd.DataFrame({'k': [k], 'ak':[x1], 'bk':[x2], 'f(ak)':[f(x1)], 'f(bk)':[f(x2)], 'x k+1':[vm], 'f(x k+1)': [f(vm)]})
            tabela_bissec = pd.concat([tabela_bissec, nova_linha], ignore_index=True)
    
    return vm

def main():
    f = lambda x: 200 * np.log(1600/(1600 - (27 * x))) + 9.8 * x - 100
    x1 = 6
    x2 = 8
    e = 0.008
    plotar_funcao(f, -300, 300, 'Função v = u.ln(M0 / M0 - c.t) + g.t')
    xk = bissec(x1, x2, e)
    print(tabela_bissec)
    print(f"O valor mais proximo do ponto de parada é: {xk}")

if __name__ == "__main__":
    main()