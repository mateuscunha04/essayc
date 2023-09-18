#include <stdio.h>
#include <string.h>
#include <locale.h>

char guess[50]; 


int desenho();

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    printf("\t Tenho patas e sou muito brincalhão, que animal eu sou?");
    scanf("%s", guess); // Use %s para ler uma string

    // Use strcmp para comparar strings
    if (strcmp(guess, "cachorro") == 0) {
        printf("Você acertou!\n");
        desenho();
    } else {
        printf("Você errou, tente novamente.");
    }

    return 0;
}

int desenho() {
    printf("     / \\__\n");
    printf("    (    @\\___\n");
    printf("    /         O\n");
    printf("   /   (_____/\n");
    printf("  /_____/   U\n");

    return 0; 
}
