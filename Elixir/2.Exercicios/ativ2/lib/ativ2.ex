defmodule Ativ2 do
  @moduledoc "Codigo para a Atividade 2 da disciplina Programacao Funcional"

  #####
  #
  # Atividade 2 - Funções recursivas e listas
  #
  # IMPORTANTE: Todos as funções a seguir devem ser escritas de forma
  # recursiva, sem utilizar funções pré-definidas em Elixir ou Erlang
  # que fazem todo o trabalho. O objetivo do exercício é aprender a
  # escrever funções recursivas "do zero", sem usar soluções prontas.
  #
  #####

  # As funções primeiro e terceiro não são recursivas
  @doc "Retorna o primeiro elemento da lista l, ou nil caso l tenha menos de 1 elemento."
  def primeiro([]), do: nil
  def primeiro([x | _resto]), do: x

  @doc "Retorna o terceiro elemento da lista l, ou nil caso l tenha menos de 3 elementos."
  def terceiro([]), do: nil
  def terceiro([_x1]), do: nil
  def terceiro([_x1, _x2]), do: nil
  def terceiro([_x1, _x2, x | _resto]), do: x

  @doc "Obtem o tamanho da lista l"
  def tamanho([]), do: 0
  def tamanho([_x | resto]), do: 1 + tamanho(resto)

  # Um tipo comum de processamento de lista e' calcular um resultado levando
  # em consideracao todos os elementos da lista, por exemplo a soma ou
  # produto de uma lista de numeros.

  @doc "Calcula a soma dos numeros da lista l."
  def soma_lista([]), do: 0
  def soma_lista([x | resto]), do: x + soma_lista(resto)

  @doc "Calcula o produto dos numeros da lista l."
  def mult_lista([]), do: 1
  def mult_lista([0 | _resto]), do: 0
  def mult_lista([x | resto]), do: x * mult_lista(resto)

  # Opcional: escreva uma versao de mult_lista que retorne zero assim que
  # encontrar um elemento 0 na lista, sem precisar ir ate' o fim da lista
  # e efetuar todas as multiplicacoes.

  @doc "Retorna uma string que e' a concatenacao de todas as strings na lista ls."
  def concat_lista([]), do: ""
  def concat_lista([x | resto]), do: x <> concat_lista(resto)

  @doc "Retorna o maior numero em uma lista de numeros (nil se a lista for vazia)."
  def max_lista([]), do: nil
  def max_lista([x]), do: x
  def max_lista([x | resto]) do
    if x > max_lista(resto) do
      x
    else
      max_lista(resto)
    end
  end

  # As vezes podemos querer uma parte dos elementos da lista, sejam
  # os primeiros ou ultimos.

  @doc """
  Retorna os primeiros n elementos da lista l.
  Se l tem n elementos ou menos, retorna a lista inteira.

  Exemplo:
  iex> Ativ2.primeiros_n([1, 2, 3, 4], 2)
  [1, 2]
  """
  def primeiros_n([], _n), do: []
  def primeiros_n(_l, 0), do: []
  def primeiros_n([x | resto], n), do: [x | primeiros_n(resto, n-1)]


  @doc """
  Retorna os ultimos n elementos da lista l.
  Se l tem n elementos ou menos, retorna a lista inteira.

  Exemplo:
  iex> Ativ2.ultimos_n([1, 2, 3, 4], 2)
  [3, 4]
  """
  def ultimos_n([], _n), do: []
  def ultimos_n(_l, 0), do: []
  def ultimos_n([x | resto], n) do
    if length([x | resto]) <= n do
      [x | resto]
    else
      ultimos_n(resto, n)
    end
  end

  # Em algumas situacoes, queremos transformar cada elemento de uma lista da
  # mesma forma, obtendo uma nova lista com os resultados.

  @doc """
  Dada uma lista de numeros, retorna uma nova lista com os numeros da lista
  original, multiplicados por 2.

  Exemplo:
  iex> Ativ2.dobro_lista([1, 2, 3, 4])
  [2, 4, 6, 8]
  """
  def dobro_lista([]), do: []
  def dobro_lista([x | resto]), do: [x*2 | dobro_lista(resto)]


  @doc """
  Dada uma lista de numeros, retorna uma nova lista com os numeros da lista
  original elevados ao quadrado.

  Exemplo:
  iex> Ativ2.quadrado_lista([1, 2, 3, 4])
  [1, 4, 9, 16]
  """
  def quadrado_lista([]), do: []
  def quadrado_lista([x | resto]), do: [x*x | quadrado_lista(resto)]


  @doc """
  Dada uma lista de pares (tuplas de dois elementos), retornar uma lista
  apenas com o primeiro elemento de cada tupla.

  Exemplo:
  iex> Ativ2.primeiros_elementos([{:tamanho, 2}, {:cor, :branco}, {:preencher, true}])
  [:tamanho, :cor, :preencher]
  """
  def primeiros_elementos([]), do: []
  def primeiros_elementos([{x, _y} | resto]), do: [x | primeiros_elementos(resto)]


  # Uma outra necessidade comum e' selecionar apenas os elementos de uma lista
  # que possuem alguma propriedade, por exemplo apenas os numeros positivos, ou
  # apenas as strings que comecam com uma letra maiuscula.

  @doc """
  Dada uma lista de numeros, retorna uma nova lista com os numeros positivos
  da lista original.

  Exemplo:
  iex> Ativ2.positivos_lista([-2, 2, 0, 88, 15, -11, 42])
  [2, 88, 15, 42]
  """
  def positivos_lista([]), do: []
  def positivos_lista([x | resto]) when x > 0, do: [x | positivos_lista(resto)]
  def positivos_lista([x | resto]) when x <= 0, do: positivos_lista(resto)

  @doc "Retorna apenas os numeros pares de uma lista de numeros."
  def pares_lista([]), do: []
  def pares_lista([x | resto])when rem(x, 2)==0, do: [x | pares_lista(resto)]
  def pares_lista([x | resto])when rem(x, 2)!=0, do: pares_lista(resto)

  # Podemos querer fazer operacoes no agregado, combinando os elementos
  # de mesma posicao em duas listas, gerando uma terceira lista. Por exemplo,
  # somar as listas [1, 2, 3] e [4, 5, 6] elemento a elemento, resultando na
  # lista [5, 7, 9].

  @doc """
  Dadas duas listas de numeros, retorna uma lista com a soma de cada elemento
  de mesma posicao nas duas listas. Se uma das listas for menor que a outra,
  retorna uma lista do tamanho da menor.

  Exemplo:
  iex> Ativ2.soma_listas([1, 2, 3], [7, 8, 9, 3])
  [8, 10, 12]
  """
  def soma_listas([], _l2), do: []
  def soma_listas(_l1, []), do: []
  def soma_listas([x | resto1], [y | resto2]), do: [x+y | soma_listas(resto1, resto2)]


  @doc """
  Dadas duas listas de strings l1 e l2, retorna uma lista em que cada elemento
  e' a concatenacao dos elementos de mesma posicao em l1 e l2.
  Se uma das listas for menor que a outra, retorna uma lista do tamanho da menor.

  Exemplo:
  iex> Ativ2.concat_listas(["a", "b", "c"], ["x", "y", "z"])
  ["ax", "by", "cz"]
  """
  def concat_listas([], _l2), do: []
  def concat_listas(_l1, []), do: []
  def concat_listas([x | resto1], [y | resto2]), do: [x<>y | concat_listas(resto1, resto2)]


  # Algumas outras manipulacoes de listas.

  # Dica: para append, e' possivel resolver apenas fazendo recursao e seguindo
  # a estrutura de uma das listas e pensando qual deve ser a resposta quando essa
  # lista for vazia.

  @doc """
  Junta/concatena duas listas, retornando uma lista com todos os elementos da
  primeira seguidos pelos elementos da segunda.

  Exemplo:
  iex> Ativ2.append([1, 2, 3], [4, 5, 6])
  [1, 2, 3, 4, 5, 6]
  """
  def append([], l2), do: l2
  def append(l1, []), do: l1
  def append([x | resto1], l2), do: [x | append(resto1, l2)]


  # Dica: para a funcao a seguir, pode ser necessario definir uma funcao auxiliar.

  @doc """
  Retorna uma lista apenas com os elementos de posicao (indice) par na lista l.
  Considere o primeiro elemento como posicao 1 (e nao 0 como seria o indice).

  Exemplo:
  iex> Ativ2.posicoes_pares([2, 4, 6, 8, 10])
  [4, 8]
  """
  def posicoes_pares([]), do: []
  def posicoes_pares([_x]), do: []
  def posicoes_pares([_x, y | resto]), do: [y | posicoes_pares(resto)]

end
