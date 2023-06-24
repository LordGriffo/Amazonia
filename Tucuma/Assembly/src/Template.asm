section .data
    ; Nenhuma variável de dados é necessária neste exemplo

section .text
    global _start

extern printf
extern exit

section .text

_start:
    ; Chamar a função main
    push ebp            ; Salvar o valor de ebp atual
    mov ebp, esp        ; Configurar ebp para apontar para a pilha atual
    sub esp, 8          ; Alocar espaço para as variáveis locais

    ; Argumentos para main
    mov eax, dword [ebp + 8]     ; Carregar argc
    mov ebx, dword [ebp + 12]    ; Carregar argv

    ; Corpo da função main
    ; Coloque seu código aqui

    ; Retornar 0
    xor eax, eax        ; Definir eax como 0 (código de retorno)
    mov esp, ebp        ; Restaurar o ponteiro da pilha
    pop ebp             ; Restaurar o valor original de ebp
    jmp exit_program    ; Saltar para o ponto de saída do programa

exit_program:
    ; Chamar as funções de biblioteca para sair do programa
    push dword 0        ; Passar 0 como código de saída
    call exit           ; Chamar a função exit da biblioteca C
