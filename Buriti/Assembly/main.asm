section .data
    num1 db 0
    num2 db 0
    soma db 0
    subtracao db 0
    multi db 0
    div db 0
    res db 0
    format db "%d", 0

section .text
    global _start

_start:
    ; Prompt and read num1
    mov eax, 4
    mov ebx, 1
    mov ecx, prompt1
    mov edx, prompt1len
    int 0x80

    mov eax, 3
    mov ebx, 0
    mov ecx, num1
    mov edx, 1
    int 0x80

    ; Prompt and read num2
    mov eax, 4
    mov ebx, 1
    mov ecx, prompt2
    mov edx, prompt2len
    int 0x80

    mov eax, 3
    mov ebx, 0
    mov ecx, num2
    mov edx, 1
    int 0x80

    ; Perform arithmetic operations
    mov al, [num1]
    mov bl, [num2]

    add al, bl
    mov [soma], al

    sub al, bl
    mov [subtracao], al

    mov al, [num1]
    mul bl
    mov [multi], al

    mov al, [num1]
    xor ah, ah
    div bl
    mov [div], al

    mov al, [num1]
    xor ah, ah
    div bl
    mov [res], ah

    ; Print results
    mov eax, 4
    mov ebx, 1

    mov ecx, format
    mov edx, 2
    int 0x80

    mov eax, 4
    mov ebx, 1
    mov ecx, soma
    mov edx, 1
    int 0x80

    mov eax, 4
    mov ebx, 1
    mov ecx, subtracao
    mov edx, 1
    int 0x80

    mov eax, 4
    mov ebx, 1
    mov ecx, multi
    mov edx, 1
    int 0x80

    mov eax, 4
    mov ebx, 1
    mov ecx, div
    mov edx, 1
    int 0x80

    mov eax, 4
    mov ebx, 1
    mov ecx, res
    mov edx, 1
    int 0x80

    ; Exit the program
    mov eax, 1
    xor ebx, ebx
    int 0x80

section .data
    prompt1 db "Digite o Primeiro Numero: ", 0
    prompt1len equ $ - prompt1
    prompt2 db "Digite o Segundo Numero: ", 0
    prompt2len equ $ - prompt2
 
