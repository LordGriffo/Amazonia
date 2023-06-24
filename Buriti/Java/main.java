import java.util.Scanner;

class Calculadora {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double num1, num2;
        String operator;

        System.out.print("Digite o Primeiro número: ");
        num1 = scanner.nextDouble();

        System.out.print("Digite o Segundo número: ");
        num2 = scanner.nextDouble();
          
                result1 = num1 + num2;
                result2 = num1 - num2;
                result3 = num1 * num2;
                result4 = num1 / num2;
                result5 = num1 % num2;

        System.out.println("Soma : " + result1);
        System.out.println("Sub  : " + result2);
        System.out.println("Multi: " + result3);
        System.out.println("Div  : " + result4);
        System.out.println("Resto: " + result5);
    }
}
