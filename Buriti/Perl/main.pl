use strict;
use warnings;

my $num1;
my $num2;
my $soma;
my $subtracao;
my $multi;
my $div;
my $res;

print "Digite o Primeiro Numero: ";
chomp($num1 = <STDIN>);

print "Digite o Segundo Numero: ";
chomp($num2 = <STDIN>);

$soma = $num1 + $num2;
$subtracao = $num1 - $num2;
$multi = $num1 * $num2;
$div = int($num1 / $num2);
$res = $num1 % $num2;

print "+: $soma\n";
print "-: $subtracao\n";
print "*: $multi\n";
print "/: $div\n";
print "%: $res\n";
