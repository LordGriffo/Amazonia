defmodule Calculadora do
  def main do
    num1 = ler_numero("Digite o Primeiro Numero: ")
    num2 = ler_numero("Digite o Segundo Numero: ")

    soma = num1 + num2
    subtracao = num1 - num2
    multi = num1 * num2
    div = div(num1, num2)
    res = rem(num1, num2)

    IO.puts("+: #{soma}")
    IO.puts("-: #{subtracao}")
    IO.puts("*: #{multi}")
    IO.puts("/: #{div}")
    IO.puts("%: #{res}")
  end

  defp ler_numero(mensagem) do
    IO.puts(mensagem)
    String.trim(IO.gets("")) |> String.to_integer()
  end
end

Calculadora.main()
