#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "headers/eletronica.h"


float calcularResistencia(float tensao, float corrente) {
    return tensao / corrente;
}

float calcularResistenciaSerie(float r1, float r2) {
    return r1 + r2;
}

float calcularResistenciaParalelo(float r1, float r2) {
    return (r1 * r2) / (r1 + r2);
}

float calcularTensao(float corrente, float resistencia) {
    return corrente * resistencia;
}

float calcularCorrente(float tensao, float resistencia) {
    return tensao / resistencia;
}

float calcularCapacitorSerie(float c1, float c2) {
    return 1 / ((1 / c1) + (1 / c2));
}

float calcularCapacitorParalelo(float c1, float c2) {
    return c1 + c2;
}

float calcularConsumoWatt(float tensao, float corrente) {
    return tensao * corrente;
}

float calcularConsumoWattPorHora(float consumoWatt, int horas) {
    return consumoWatt * horas;
}

float calcularConsumoReaisPorHora(float consumoWattPorHora, float custoKwh) {
    return (consumoWattPorHora * custoKwh) / 1000;
}

float calcularPI() {
    return acos(-1.0);
}
