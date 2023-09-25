#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char guess[50]; 
int randomNumber;
void desenhoDog();
void desenhoMouse();
void desenhoMamute();

int main() {
    srand(time(NULL));
    randomNumber = rand() % 3;

    void (*charadaArray[3])();

    charadaArray[0] = desenhoDog;
    charadaArray[1] = desenhoMouse;
    charadaArray[2] = desenhoMamute;

    charadaArray[randomNumber]();

    return 0;
}

void desenhoDog() {
    printf("\t Tenho patas e sou muito brincalhao, que animal eu sou? \t");
    scanf("%s", guess);

    if (strcmp(guess, "cachorro") == 0) {
        printf("Voce acertou!\n\n");
        printf("     / \\__\n");
        printf("    (    @\\___\n");
        printf("    /         O\n");
        printf("   /   (_____/\n");
        printf("  /_____/   \n"); 
    } else {
        printf("Voce errou, tente novamente.");
    }
}

void desenhoMouse() {
    printf("\t Tenho a mania de roer as coisas e as pessoas tem medo de mim. \t");
    scanf("%s", guess);

    if (strcmp(guess, "rato") == 0) {
        printf("Voce acertou!\n\n");
        printf("      ,  ,\n");
        printf("    <:3  )~\n");
        printf("      '  '\n");
    } else {
        printf("Voce errou, tente novamente.");
    }
}

void desenhoMamute() {
    printf("\t Vivi em temperaturas congelantes e ja estou extinto. \t");
    scanf("%s", guess);

    if (strcmp(guess, "mamute") == 0) {
        printf("Voce acertou!\n\n");
        printf("      __  __\n");
        printf("     /o o\\  \\ \n");
        printf("    ( J J _  \\  \n");
        printf("     W  W   W W \n");
    } else {
        printf("Voce errou, tente novamente.");
    }
}
