global main
extern printf

section .data
    msg db "Hello, Holberton", 10, 0
    fmt db "%s", 0

section .text
main:
    mov rdi, fmt    ; Premier argument pour printf est l'adresse de la chaîne de format
    mov rsi, msg    ; Deuxième argument pour printf est l'adresse de la chaîne de caractères
    xor eax, eax    ; Le registre eax doit être mis à zéro pour que printf fonctionne correctement
    call printf     ; Appeler la fonction printf
    mov rax, 0      ; Mettre la valeur de retour à zéro
    ret             ; Terminer le programme
