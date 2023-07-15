section .data
    hello db 'Hello, World!', 0x0A ; 0x0A é o caractere de nova linha

section .text
    global _start

_start:
    ; Escrever a string na saída padrão (stdout)
    mov eax, 4            ; Número da chamada de sistema para escrever (sys_write)
    mov ebx, 1            ; Descritor de arquivo padrão para saída padrão (stdout)
    mov ecx, hello        ; Endereço da string
    mov edx, 14           ; Comprimento da string, incluindo o caractere de nova linha
    int 0x80              ; Chamada de sistema interrompendo a execução

    ; Sair do programa
    mov eax, 1            ; Número da chamada de sistema para sair (sys_exit)
    xor ebx, ebx          ; Código de saída 0
    int 0x80              ; Chamada de sistema interrompendo a execução
