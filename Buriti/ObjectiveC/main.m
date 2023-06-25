#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        int num1, num2, soma, subtracao, multi, div, res;
        
        printf("Digite o Primeiro Numero: ");
        scanf("%d", &num1);
        
        printf("Digite o Segundo Numero: ");
        scanf("%d", &num2);
        
        soma = num1 + num2;
        subtracao = num1 - num2;
        multi = num1 * num2;
        div = num1 / num2;
        res = num1 % num2;
        
        printf("+: %d\n", soma);
        printf("-: %d\n", subtracao);
        printf("*: %d\n", multi);
        printf("/: %d\n", div);
        printf("%%: %d\n", res);
    }
    return 0;
}
