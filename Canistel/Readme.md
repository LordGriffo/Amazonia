# Próximo Número Primo

Este é um programa em Rust que calcula o próximo número primo de 1 em 1.

## Compilação

Certifique-se de ter o [Rust](https://www.rust-lang.org/tools/install) instalado em seu sistema antes de prosseguir.

Para compilar o código em modo de lançamento (release), siga as etapas abaixo:

1. Abra um terminal e navegue até o diretório do projeto.

2. Execute o seguinte comando:

   bash
   cargo build --release

O comando cargo build irá compilar o código em modo de lançamento, otimizando o desempenho do programa.

    Após a conclusão da compilação, o binário resultante estará localizado na pasta target/release.

Execução

Após a compilação, você pode executar o programa gerado usando o seguinte comando:

bash

cargo run --release

Isso executará o programa compilado em modo de lançamento.
Observações

    O programa calculará e imprimirá o próximo número primo de 1 em 1 em um loop infinito. Para interromper a execução, pressione Ctrl+C no terminal.

    Caso deseje interromper a execução manualmente, você pode executar o programa sem o modo de lançamento usando o seguinte comando:

    bash

cargo run

Isso executará o programa em modo de desenvolvimento (debug).
