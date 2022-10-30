#include <stdio.h>

int main(void) {
    char nome[50], endereco[60], telefone[14];

    printf('Digite seu nome: ');
    fgets(nome,50,stdin);
    
    printf('Digite seu endereço: ');
    fgets(endereco,60,stdin);
    
    printf('Digite seu telefone: ');
    fgets(telefone,14,stdin);
    
    printf("Seu nome é: %s",nome);
    printf("Você mora em: %s",endereco);
    printf("Seu telefone é: %s",telefone);
}