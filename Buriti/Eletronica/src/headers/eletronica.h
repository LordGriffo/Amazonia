#ifndef ELETRONICA_H
#define ELETRONICA_H

// Funções de cálculo
float calcularResistencia(float tensao, float corrente);
float calcularResistenciaSerie(float r1, float r2);
float calcularResistenciaParalelo(float r1, float r2);
float calcularTensao(float corrente, float resistencia);
float calcularCorrente(float tensao, float resistencia);
float calcularCapacitorSerie(float c1, float c2);
float calcularCapacitorParalelo(float c1, float c2);
float calcularConsumoWatt(float tensao, float corrente);
float calcularConsumoWattPorHora(float consumoWatt, int horas);
float calcularConsumoReaisPorHora(float consumoWattPorHora, float custoKwh);
float calcularPI();

#endif
