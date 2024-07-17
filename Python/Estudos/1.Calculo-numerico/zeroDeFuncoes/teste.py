import pandas as pd

# Criando o DataFrame
data = {
    'Nome': ['Ana', 'Bruno', 'Carlos', 'Diana'],
    'Idade': [23, 30, 45, 35],
    'Cidade': ['São Paulo', 'Rio de Janeiro', 'Belo Horizonte', 'Curitiba']
}

df = pd.DataFrame(data)
print(df)

# Adicionando uma nova coluna
# df['Profissão'] = ['Engenheira', 'Médico', 'Advogado', 'Professor']

# Filtrando pessoas com mais de 30 anos
# filtro = df[df['Idade'] > 30]
# print("Pessoas com mais de 30 anos:")
# print(filtro)

# Ordenando por Idade
# df_ordenado = df.sort_values(by='Idade')
# print("\nDataFrame ordenado por Idade:")
# print(df_ordenado)

# Média de idade
# media_idade = df['Idade'].mean()
# print(f'\nMédia de idade: {media_idade}')
