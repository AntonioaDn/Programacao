# Em Elixir, as listas são sempre aninhadas, ou seja, cada posicao de uma lista
# Possui um elemento e um ponteiro que aponta para o proximo elemento, que também é o resto da
# lista.

defmodule Listas do
	def soma_lista([]), do: 0
	def soma_lista([x | resto]) do
		x + soma_lista(resto)
	end
	def mult_lista([]), do: 1
	def mult_lista([x, resto]) do
		x * mult_lista(resto)
	end
end

Listas.soma_lista([1, 2, 3, 4, 5])
Listas.mult_lista([1, 2, 3, 4, 5])

