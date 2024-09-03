defmodule Api do
  @url "https://api.github.com/repos/elixir-lang/elixir/issues"

  def main(args) do
    IO.inspect(args)
    HTTPoison.get(@url)
    |> processa_resposta
    |> mostra_resultado
  end

  defp processa_resposta({ :ok, %HTTPoison.Response{ status_code: 200, body: b}}) do
    { :ok , b}
  end

  defp processa_resposta({ :error, r}), do: { :error, r}
  defp processa_resposta({ :ok, %HTTPoison.Response{ status_code: _, body: b}}) do
    { :error, b}
  end

  defp mostra_resultado({ :error, _}), do: IO.puts("Ocorreu um erro.")

  defp mostra_resultado({ :ok, json}) do
    { :ok, issues} = Poison.decode(json)
    mostra_issues(issues)
  end

  defp mostra_issues([]), do: nil
  defp mostra_issues([x | resto]) do
    number = x["number"]
    title = x["title"]
    state = x["state"]
    IO.puts "#{number} | #{title} | #{state}"
    mostra_issues(resto)
  end

end
