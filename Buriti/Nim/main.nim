import strutils

var num1, num2, soma, subtracao, multi, div, res: int

echo "Digite o Primeiro Numero: "
num1 = parseInt(readLine(stdin))
echo "Digite o Segundo Numero: "
num2 = parseInt(readLine(stdin))

soma = num1 + num2
subtracao = num1 - num2
multi = num1 * num2
div = num1 div num2
res = num1 mod num2

echo "+: ", $soma
echo "-: ", $subtracao
echo "*: ", $multi
echo "/: ", $div
echo "%: ", $res
