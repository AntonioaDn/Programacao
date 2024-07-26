from sympy import symbols, diff

def main():
    funcao = input("Informe a função: ")
    e = float(input("Informe o critério de parada: "))
    a = float(input("Digite o limite inferior do intervalo de análise: "))
    b = float(input("Digite o limite superior do intervalo de análise: "))

    zeroBi, repsBi = bissec(funcao, a, b, e)
    zeroFP, repsFP = falsaPos(funcao, a, b, e)
    zeroNt, repsNt = newton(funcao, a, b, e)
    zeroSec, repsSec = secante(funcao, a, b, e)

    print_resultado(funcao, "da Bissecção", repsBi, a, b, zeroBi)
    print_resultado(funcao, "da Falsa Posição", repsFP, a, b, zeroFP)
    print_resultado(funcao, "de Newton", repsNt, a, b, zeroNt)
    print_resultado(funcao, "da Secante", repsSec, a, b, zeroSec)

def print_resultado(funcao, metodo, reps, a, b, raiz):
    if reps!= 0:
        print(f" - Raiz da função {funcao} obtida com {reps} iterações com o método {metodo} no intervalo [{a}, {b}]: {raiz}.\n")
    else:
        print(f" - Não foi possível encontrar uma raíz para a função {funcao} no intervalo [{a}, {b}] usando o método {metodo}.\n")

def bissec(funcao, a, b, e):

    if (a > b):
        return 0, 0
    
    f_a = func(funcao, a)
    f_b = func(funcao, b)

    if f_a*f_b >= 0:
        return 0, 0
        
    reps = 0
    valorMedio = (a+b)/2
    f_vm = func(funcao, valorMedio)

    while (abs(f_vm) > e):
        
        if (f_a * f_vm < 0):
            b = valorMedio
            f_b = func(funcao, b)
        elif (f_b * f_vm < 0):
            a = valorMedio
            f_a = func(funcao, a)
        else:
            return 0, 0

        valorMedio = (a+b)/2
        f_vm = func(funcao, valorMedio)
        reps += 1

    return valorMedio, reps
    
def falsaPos(funcao, a, b, e):

    if (a > b):
        return 0, 0
    
    f_a = func(funcao, a)
    f_b = func(funcao, b)

    if (f_a*f_b >= 0):
        return 0, 0
        
    reps = 0
    valorMedio = (a*f_b - b*f_a)/(f_b - f_a) 
    f_vm = func(funcao, valorMedio)

    while (abs(f_vm) > e):
        
        if (f_a * f_vm < 0):
            b = valorMedio
            f_b = func(funcao, b)
        elif (f_b * f_vm < 0):
            a = valorMedio
            f_a = func(funcao, a)
        else:
            return 0, 0

        valorMedio = (a*f_b - b*f_a)/(f_b - f_a) 
        f_vm = func(funcao, valorMedio)
        reps += 1

    return valorMedio, reps
    
def newton(funcao, a, b, e):

    if a > b:
        return 0, 0

    f_a = func(funcao, a)
    f_b = func(funcao, b)

    if (f_a*f_b >= 0):
        return 0, 0
        
    reps = 0
    valorTeste = (a+b)/2

    x = symbols('x')
    derivada_funcao = diff(funcao, x)
    derivada_vt = derivada_funcao.subs('x', valorTeste)
    
    if (derivada_vt == 0):
        return 0, 0
    
    f_vt = func(funcao, valorTeste)

    while (abs(f_vt) > e and derivada_vt != 0):

        valorTeste = valorTeste - (f_vt/derivada_vt)
        f_vt = func(funcao, valorTeste)
        derivada_vt = derivada_funcao.subs('x', valorTeste)

        reps += 1

    return valorTeste, reps


def secante(funcao, a, b, e):

    if a > b:
        return 0, 0

    f_a = func(funcao, a)
    f_b = func(funcao, b)

    if (f_a*f_b >= 0):
        return 0, 0
        
    reps = 0

    while (abs(f_b) > e):

        c = b - ((f_b*(b-a))/(f_b - f_a))
        a, b = b, c
        f_a = f_b
        f_b = func(funcao, b)

        reps += 1
    
    return b, reps

def func(funcao, x):
    funcao = funcao.replace('x', str(x))

    try:
        return eval(funcao)
    except:
        print("Falha no cálculo da função!")
        return 0

if __name__ == "__main__":
    main()