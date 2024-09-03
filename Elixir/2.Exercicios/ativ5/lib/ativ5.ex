defmodule Ativ5 do
  @doc """
  Divide a string frase em palavras. Uma palavra é considerada
  uma sequência de caracteres que não contém caracteres de
  espaço (espaço, tabulação, nova linha). Em uma frase com
  pontuação, essa divisão em palavras vai incluir a pontuação
  ao final da palavra (veja o exemplo).

  Exemplo:
  iex> Ativ5.palavras("A morsa subiu no coqueiro, e o coqueiro tremeu.")
  ["A", "morsa", "subiu", "no", "coqueiro,", "e", "o", "coqueiro", "tremeu."]
  """
  def palavras(frase), do: String.split(frase, ~r{\s}, trim: true)

  @doc """
  Remove o último caractere de uma string.

  Exemplo:
  iex> Ativ5.remove_ultimo("multi-modalidades.")
  "multi-modalidades"
  """
  def remove_ultimo(""), do: ""
  def remove_ultimo(frase) do
    comprimento = String.length(frase)
    String.slice(frase, 0, comprimento - 1)
  end

  @padroes [ignora_cx_alta: true, pontuacao: [".", ",", "!", "?"]]

  @doc """
  Calcula a frequência de ocorrência de palavras no texto, retornando
  um mapa em que cada chave é uma palavra do texto e o valor associado
  à chave é o número de vezes que a palavra ocorre no texto.

  A opção ignora_cx_alta tem valor booleano; se for verdadeira, a
  contagem de frequência deve ignorar a diferença entre letras
  maiúsculas e minúsculas. Por exemplo, com ignora_cx_alta verdadeira,
  as strings "Sorvete", "sorvete" e "sOrvEtE" são consideradas a mesma
  palavra. O padrão é verdadeiro.

  A opção pontuacao é uma lista de strings que representam símbolos
  de pontuação que são ignorados no final das palavras. Por exemplo,
  se a lista de pontuação inclui a string ".", as strings "tremeu"
  e "tremeu." (com um ponto final na última posição) são consideradas
  a mesma palavra. O padrão deve ser [".", ",", "!", "?"].
  """
  def freq_palavras(texto, opcoes \\ []) do
    opcoes = Keyword.merge(@padroes, opcoes)
    palavras = palavras(texto)
    palavras = if opcoes[:ignora_cx_alta], do: aplicar_map(palavras, &String.downcase/1), else: palavras
    palavras = aplicar_map(palavras, &remove_pontuacao_final(&1, opcoes[:pontuacao]))
    aplicar_fold_left(palavras, %{}, fn frequencia, palavra -> Map.update(frequencia, palavra, 1, &(&1 + 1)) end)
  end

  defp remove_pontuacao_final(palavra, pontuacao) do
    if String.ends_with?(palavra, pontuacao) do
      remove_ultimo(palavra)
    else
      palavra
    end
  end

  @doc """
  Retorna uma lista com as palavras mais frequentes do texto, em ordem
  decrescente de ocorrência. A lista deve conter pares com o primeiro
  componente sendo a palavra e o segundo o número de ocorrências no texto.
  As opções são as mesmas da função freq_palavras.

  Exemplo:
  iex> Ativ5.palavras_mais_frequentes("O gato pulou o muro e o rato seguiu o gato.")
  [{"o", 4}, {"gato", 2}, {"pulou", 1}, {"muro", 1}, {"e", 1}, {"rato", 1}, {"seguiu", 1}]
  """
  def palavras_mais_frequentes(texto, opcoes \\ []) do
    frequencias = freq_palavras(texto, opcoes)
    frequencias
    |> Enum.to_list()
    |> Enum.sort_by(fn {_palavra, contagem} -> -contagem end)
  end

  # Função aplicar_map
  def aplicar_map([], _funcao), do: []
  def aplicar_map([cabeca | cauda], funcao), do: [funcao.(cabeca) | aplicar_map(cauda, funcao)]

  # Função aplicar_fold_left
  def aplicar_fold_left([], inicial, _funcao), do: inicial
  def aplicar_fold_left([cabeca | cauda], inicial, funcao), do: aplicar_fold_left(cauda, funcao.(inicial, cabeca), funcao)

  @doc """
  Lê o conteúdo de um arquivo texto e retorna como string. Vai causar um erro
  no programa caso não consiga ler o arquivo por qualquer motivo.
  """
  def le_arquivo(nome_arquivo) do
    { :ok, texto } = File.read(nome_arquivo)
    texto
  end
end
