IDENTIFICATION DIVISION.
PROGRAM-ID. ArithmeticProgram.

DATA DIVISION.
WORKING-STORAGE SECTION.
01 Num1 PIC 9(5).
01 Num2 PIC 9(5).
01 Soma PIC 9(5).
01 Subtracao PIC 9(5).
01 Multi PIC 9(5).
01 Div PIC 9(5).
01 Res PIC 9(5).

PROCEDURE DIVISION.
    DISPLAY "Digite o Primeiro Numero: ".
    ACCEPT Num1.

    DISPLAY "Digite o Segundo Numero: ".
    ACCEPT Num2.

    COMPUTE Soma = Num1 + Num2.
    COMPUTE Subtracao = Num1 - Num2.
    COMPUTE Multi = Num1 * Num2.
    COMPUTE Div = Num1 / Num2.
    COMPUTE Res = Num1 MOD Num2.

    DISPLAY "+: " Soma.
    DISPLAY "-: " Subtracao.
    DISPLAY "*: " Multi.
    DISPLAY "/: " Div.
    DISPLAY "%: " Res.

    STOP RUN.
 
