const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Digite o Primeiro Numero: ", (num1) => {
  rl.question("Digite o Segundo Numero: ", (num2) => {
    num1 = parseInt(num1);
    num2 = parseInt(num2);

    const soma = num1 + num2;
