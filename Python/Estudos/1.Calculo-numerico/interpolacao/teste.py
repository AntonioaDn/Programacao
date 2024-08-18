# Simulando a temperatura de agosto para o ano de 2015 (Ano 4)
ano_faltante = 4  # Define o ano faltante como 4
temp_lagrange = polinomio_lagrange.evalf(subs={sp.symbols('x'): ano_faltante})  # Calcula a temperatura usando Lagrange
temp_newton = polinomio_newton.evalf(subs={sp.symbols('x'): ano_faltante})  # Calcula a temperatura usando Newton

print(f"Previsão de temperatura em dezembro de 2015 pelo polinômio de Lagrange: {temp_lagrange}")  # Imprime a previsão de Lagrange
print(f"Previsão de temperatura em dezembro de 2015 pelo polinômio de Newton: {temp_newton}")  # Imprime a previsão de Newton