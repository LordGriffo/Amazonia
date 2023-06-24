#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "headers/eletronica.h"

int main() {
    int opcao;
    float v, i;
    float tensao, corrente, r1, r2, c1, c2,consumoWatt, custoKwh, consumoWattPorHora;
    int horas;

    do {
		printf("\n");
        printf("Calculadora Eletrônica\n");
        printf("----------------------\n");
        printf("1. Calcular Resistência\n");
        printf("2. Calcular Resistencia em Série\n");
        printf("3. Calcular Resistencia em Paralelo\n");
        printf("4. Calcular Tensão usando a Lei de Ohm\n");
        printf("5. Calcular Corrente usando a Lei de Ohm\n");
        printf("6. Calcular Capacitores em Série\n");
        printf("7. Calcular Capacitores em Paralelo\n");
        printf("8. Calcular Consumo de Watts\n");
        printf("9. Calcular Consumo de Watts por hora\n");
        printf("10. Calcular Consumo de Reais por hora\n");
        printf("11. Calcular PI\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
            case 1:
                printf("Digite o valor da tensão do Resistor (em Volts): ");
                scanf("%f", &tensao);
                printf("Digite o valor da corrente do Resistor (em Amperes): ");
                scanf("%f", &corrente);
                float resistencia = calcularResistencia(tensao, corrente);
                printf("A resistência é: %.2f ohms\n", resistencia);
                break;

            case 2:
                printf("Digite o valor do resistor 1 (R1): ");
                scanf("%f", &r1);
                printf("Digite o valor do resistor 2 (R2): ");
                scanf("%f", &r2);
                float resistenciaSerie = calcularResistenciaSerie(r1, r2);
                printf("Resistência em série (R1 + R2): %.2f\n", resistenciaSerie);
                break;

            case 3:
                printf("Digite o valor do resistor 1 (R1): ");
                scanf("%f", &r1);
                printf("Digite o valor do resistor 2 (R2): ");
                scanf("%f", &r2);
                float resistenciaParalelo = calcularResistenciaParalelo(r1, r2);
                printf("Resistência em paralelo (R1 || R2): %.2f\n", resistenciaParalelo);
                break;

            case 4:
                printf("Digite o valor da corrente (I): ");
                scanf("%f", &corrente);
                printf("Digite o valor da resistência (R): ");
                scanf("%f", &resistencia);
                float tensaoCalculada = calcularTensao(corrente, resistencia);
                printf("Tensão (V = I * R): %.2f\n", tensaoCalculada);
                break;

            case 5:
                printf("Digite o valor da tensão (V): ");
                scanf("%f", &tensao);
                printf("Digite o valor da resistência (R): ");
                scanf("%f", &resistencia);
                float correnteCalculada = calcularCorrente(tensao, resistencia);
                printf("Corrente (I = V / R): %.2f\n", correnteCalculada);
                break;

            case 6:
                printf("Digite o valor do primeiro capacitor: ");
                scanf("%f", &c1);
                printf("Digite o valor do segundo capacitor: ");
                scanf("%f", &c2);
                float capacitanciaSerie = calcularCapacitorSerie(c1, c2);
                printf("Capacitância em Série: %.2f\n", capacitanciaSerie);
                break;

            case 7:
                printf("Digite o valor do primeiro capacitor: ");
                scanf("%f", &c1);
                printf("Digite o valor do segundo capacitor: ");
                scanf("%f", &c2);
                float capacitanciaParalelo = calcularCapacitorParalelo(c1, c2);
                printf("Capacitância em Paralelo: %.2f\n", capacitanciaParalelo);
                break;

            case 8:
                printf("Digite o valor da Tensao: ");
                scanf("%f", &tensao);
                printf("Digite o valor da Corrente: ");
                scanf("%f", &corrente);
                float consumoWatt = calcularConsumoWatt(tensao, corrente);
                printf("O consumo de energia é de %.2f Watts\n", consumoWatt);
                break;

            case 9:
                printf("Digite o Consumo de Watts: ");
                scanf("%f", &consumoWatt);
                printf("Digite o valor de Horas: ");
                scanf("%d", &horas);
                float consumoWattPorHora = calcularConsumoWattPorHora(consumoWatt, horas);
                printf("O consumo de energia por hora é de %.2f Watts/h\n", consumoWattPorHora);
                break;

            case 10:
                printf("Digite o Consumo de Watts Por Hora: ");
                scanf("%f", &consumoWattPorHora);
                printf("Digite o Custo de Kwh: ");
                scanf("%f", &custoKwh);
                float consumoReaisPorHora = calcularConsumoReaisPorHora(consumoWattPorHora, custoKwh);
                printf("O consumo de energia por hora é de %.2f reais/h\n", consumoReaisPorHora);
                break;

            case 11:
                float pi = calcularPI();
                printf("O valor de PI é: %.10f\n", pi);
                break;

            case 0:
                printf("Encerrando a calculadora...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
