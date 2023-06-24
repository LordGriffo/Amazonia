program ArithmeticProgram;

var
  num1, num2, soma, subtracao, multi, divi, res: Integer;

begin
  Write('Digite o Primeiro Numero: ');
  Readln(num1);
  
  Write('Digite o Segundo Numero: ');
  Readln(num2);

  soma := num1 + num2;
  subtracao := num1 - num2;
  multi := num1 * num2;
  divi := num1 div num2;
  res := num1 mod num2;

  Writeln('+ : ', soma);
  Writeln('- : ', subtracao);
  Writeln('* : ', multi);
  Writeln('/ : ', divi);
  Writeln('% : ', res);
end.
