num1 = 0
num2 = 0
soma = 0
subtracao = 0
multi = 0
div = 0
res = 0

io.write("Digite o Primeiro Numero: ")
num1 = tonumber(io.read())

io.write("Digite o Segundo Numero: ")
num2 = tonumber(io.read())

soma = num1 + num2
subtracao = num1 - num2
multi = num1 * num2
div = num1 / num2
res = num1 % num2

io.write("+: ", soma, "\n")
io.write("-: ", subtracao, "\n")
io.write("*: ", multi, "\n")
io.write("/: ", div, "\n")
io.write("%: ", res, "\n")
