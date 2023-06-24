#!/bin/bash

echo -n "Digite o Primeiro Numero: "
read num1

echo -n "Digite o Segundo Numero: "
read num2

soma=$((num1 + num2))
subtracao=$((num1 - num2))
multi=$((num1 * num2))
div=$((num1 / num2))
res=$((num1 % num2))

echo "+: $soma"
echo "-: $subtracao"
echo "*: $multi"
echo "/: $div"
echo "%: $res"
