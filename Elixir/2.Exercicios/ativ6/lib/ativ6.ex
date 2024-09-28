defmodule Ativ6 do
  # Recursividade de cauda e acumuladores

  # Escreva as funcoes a seguir usando recursividade de cauda. Se precisar,
  # crie funcoes auxiliares que usam um parametro acumulador.

  # Obs: os testes nao vao testar se as funcoes apresentam recursividade
  # de cauda ou nao, apenas se o objetivo da funcao e' cumprido. Mas a
  # avaliação levará em conta, funções que não sejam recursivas de cauda
  # ou chamem funções já prontas da biblioteca padrão Elixir serão
  # penalizadas.

  @doc "Obtem o tamanho da lista l."
  def tamanho(l), do: calc_tamanho(l, 0)

  defp calc_tamanho([], contador), do: contador
  defp calc_tamanho([_ | r], contador), do: calc_tamanho(r, contador + 1)


  @doc """
  Replica a string s, n vezes.

  Exemplo:
  iex> Ativ6.replica("ruby", 4)
  "rubyrubyrubyruby"
  """
  def replica(s, n), do: calc_replica(s, n, "")

  defp calc_replica(_, 0, acumulador), do: acumulador
  defp calc_replica(s, n, acumulador), do: calc_replica(s, n - 1, s <> acumulador)


  #
  # Funções que usam listas como acumuladores geralmente precisam retornar
  # o reverso da lista acumulada. É importante que a função que calcula
  # o reverso de uma lista apresente recursividade de cauda, caso
  # contrário a vantagem de mudar uma função para usar acumuladores
  # se perde.
  #

  @doc """
  Obtém uma lista com os mesmos elementos da lista l, mas na ordem
  reversa.

  Exemplo:
  iex> Ativ6.reverso([1, 2, 3, 4])
  [4, 3, 2, 1]
  """
  def reverso(l), do: do_reverse(l, [])

  defp do_reverse([], acumulador), do: acumulador
  defp do_reverse([x | resto], acumulador), do: do_reverse(resto, [x | acumulador])

  # A função reverso deve ser usada nas funções a seguir que acumulam
  # listas, como map e filter.

  @doc """
  Aplica a funcao f em cada elemento da lista l, retornando uma nova lista
  com os elementos transformados.

  Exemplo:
  iex> Ativ6.map([1, 2, 3], fn x -> x * 2 end)
  [2, 4, 6]
  """
  def map(l, f), do: do_map(l, f, []) |> reverso()

  defp do_map([], _f, acumulador), do: acumulador
  defp do_map([x | resto], f, acumulador), do: do_map(resto, f, [f.(x) | acumulador])

  @doc "Calcula a soma dos numeros da lista l."
  def soma_lista(l), do: do_soma_lista(l, 0)

  defp do_soma_lista([], acumulador), do: acumulador
  defp do_soma_lista([x | resto], acumulador), do: do_soma_lista(resto, x+acumulador)

  @doc "Calcula o produto dos numeros da lista l."
  def mult_lista(l), do: do_mult_lista(l, 1)

  defp do_mult_lista([], acumulador), do: acumulador
  defp do_mult_lista([x | resto], acumulador), do: do_mult_lista(resto, x*acumulador)


  @doc "Retorna uma string que e' a concatenacao de todas as strings na lista ls."
  def concat_lista(ls), do: do_concat_lista(ls, "")

  defp do_concat_lista([], acumulador), do: acumulador
  defp do_concat_lista([x | resto], acumulador), do: do_concat_lista(resto, acumulador<>x)


  @doc """
  Retorna uma lista com os elementos da lista l para os quais o predicado p
  returna true.

  Exemplo:
  iex> Ativ6.filter([10, 2, 15, 9, 42, 27], fn x -> x > 10 end)
  [15, 42, 27]
  """
  def filter(l, p), do: do_filter(l, p, []) |> reverso()

  defp do_filter([], _, acumulador), do: acumulador
  defp do_filter([x | resto], p, acumulador) do
     do_filter(resto, p, (if p.(x), do: [x | acumulador], else: acumulador))
  end

  # Opcional: fold_right com recursão de cauda

  # Vimos que duas funções de alta ordem importantes são
  # fold_left e fold_right, que combinam os elementos de uma lista
  # usando uma função passada como parâmetro. A diferença entre
  # fold_left e fold_right é a direção que as operações são agrupadas.
  #
  # Por exemplo, combinando a lista [1, 2, 3] com a operação de soma
  # e elemento inicial 0, fold_left faz (((0 + 1) + 2) + 3), agrupando
  # as somas à esquerda. Já fold_right faz as operações na ordem
  # (1 + (2 + (3 + 0))), agrupando à direita. Para a soma o resultado
  # será o mesmo, mas em operações não associativas como subtração é
  # importante escolher a direção.

  # A função fold_left, da forma que ela normalmente é escrita, já
  # tem recursão em cauda:

  def fold_left([], _f, i), do: i
  def fold_left([_x | r], f, i), do: fold_left(r, f, f.(i, r))

  # Já fold_right normalmente não é recursiva em cauda:

  def fold_right([], _f, i), do: i
  def fold_right([x | r], f, i), do: f.(x, fold_right(r, f, i))

  # Para este exercício opcional, crie uma versão de fold_right
  # com recursividade de cauda. Adicione testes para verificar
  # a funcionalidade da versão com recursividade de causa.

end
