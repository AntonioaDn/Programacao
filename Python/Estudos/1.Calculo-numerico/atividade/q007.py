# Importacoes
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Criando a tabela
tabela_falsa_posicao = pd.DataFrame(columns=['k', 'ak', 'bk', 'f(ak)', 'f(bk)', 'x k+1', 'f(x k+1)'])

def f(x):
    return 10 - 15 * ((np.exp(-0.1 * x) - np.exp(-0.5 * x))) - 4

def TVM(x1, x2):
    return f(x1) * f(x2) < 0

def newton_raphson(x0, e):
    while abs(f(x0)) >= e:
        k+=1
        x0 = x0 - (np.diff())/()