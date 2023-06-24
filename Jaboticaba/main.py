import random

def escolher_palavra():
    palavras = ["amazonia", "pantanal", "brasil", "cerrado", "sertao"]
    return random.choice(palavras)

def exibir_palavra(palavra, letras_corretas):
    for letra in palavra:
        if letra in letras_corretas:
            print(letra, end=' ')
        else:
            print('_', end=' ')
    print()

def adivinhar_letra():
    while True:
        letra = input("Digite uma letra: ").lower()
        if len(letra) != 1:
            print("Por favor, digite apenas uma letra.")
        else:
            return letra

def jogar_forca():
    palavra = escolher_palavra()
    letras_corretas = []
    tentativas = 6

    print("Bem-vindo ao Jogo da Forca!")
    print("A palavra secreta contém", len(palavra), "letras.")

    while True:
        exibir_palavra(palavra, letras_corretas)
        letra = adivinhar_letra()

        if letra in letras_corretas:
            print("Você já adivinhou essa letra.")
            continue

        if letra in palavra:
            letras_corretas.append(letra)
            if set(palavra) == set(letras_corretas):
                exibir_palavra(palavra, letras_corretas)
                print("Parabéns! Você acertou a palavra!")
                break
        else:
            print("Letra incorreta.")
            tentativas -= 1
            print("Tentativas restantes:", tentativas)

        if tentativas == 0:
            print("Você perdeu! A palavra correta era:", palavra)
            break

jogar_forca()
