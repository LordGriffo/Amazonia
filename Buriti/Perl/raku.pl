my $num1;
my $num2;
my $soma;
my $subtracao;
my $multi;
my $div;
my $res;

say "Digite o Primeiro Numero: ";
$num1 = get() // 0; # Lê a entrada do usuário ou atribui 0 se não houver entrada

say "Digite o Segundo Numero: ";
$num2 = get() // 0;

$soma = $num1 + $num2;
$subtracao = $num1 - $num2;
$multi = $num1 * $num2;
$div = $num1 div $num2;
$res = $num1 % $num2;

say "+: $soma";
say "-: $subtracao";
say "*: $multi";
say "/: $div";
say "%: $res";
