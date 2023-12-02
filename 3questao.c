#include <stdio.h>
#include <string.h>

void verificarSegunda(char placa[]) {
    if (placa[7] == '1' || placa[7] == '0') {
        printf("%s não pode circular na segunda-feira\n", placa);
    } else {
        printf("%s pode circular na segunda-feira\n", placa);
    }
}

void verificarTerca(char placa[]) {
    if (placa[7] == '3' || placa[7] == '2') {
        printf("%s não pode circular na terça-feira\n", placa);
    } else {
        printf("%s pode circular na terça-feira\n", placa);
    }
}

void verificarQuarta(char placa[]) {
    if (placa[7] == '5' || placa[7] == '4') {
        printf("%s não pode circular na quarta-feira\n", placa);
    } else {
        printf("%s pode circular na quarta-feira\n", placa);
    }
}

void verificarQuinta(char placa[]) {
    if (placa[7] == '7' || placa[7] == '6') {
        printf("%s não pode circular na quinta-feira\n", placa);
    } else {
        printf("%s pode circular na quinta-feira\n", placa);
    }
}

void verificarSexta(char placa[]) {
    if (placa[7] == '9' || placa[7] == '8') {
        printf("%s não pode circular na sexta-feira\n", placa);
    } else {
        printf("%s pode circular na sexta-feira\n", placa);
    }
}

void verificarSegundaSul(char placa[]) {
    if (placa[6] == '0' || placa[6] == '1') {
        printf("%s não pode circular na segunda-feira\n", placa);
    } else {
        printf("%s pode circular na segunda-feira\n", placa);
    }
}

void verificarTercaSul(char placa[]) {
    if (placa[6] == '3' || placa[6] == '2') {
        printf("%s não pode circular na terça-feira\n", placa);
    } else {
        printf("%s pode circular na terça-feira\n", placa);
    }
}

void verificarQuartaSul(char placa[]) {
    if (placa[6] == '4' || placa[6] == '5') {
        printf("%s não pode circular na quarta-feira\n", placa);
    } else {
        printf("%s pode circular na quarta-feira\n", placa);
    }
}

void verificarQuintaSul(char placa[]) {
    if (placa[6] == '6'|| placa[6] == '7') {
        printf("%s não pode circular na quinta-feira\n", placa);
    } else {
        printf("%s pode circular na quinta-feira\n", placa);
    }
}

void verificarSextaSul(char placa[]) {
    if (placa[6] == '8' ||placa[6] == '9') {
        printf("%s não pode circular na sexta-feira\n", placa);
    } else {
        printf("%s pode circular na sexta-feira\n", placa);
    }
}

int main() {
    char placa[10];
    char dia[15];
    int verificar;

    scanf("%s", placa);
    scanf("%s", dia);

    if (strlen(placa) == 8 && placa[3] == '-') {
        if (strcmp(dia, "SEGUNDA-FEIRA") == 0) {
            verificarSegunda(placa);
        } else if (strcmp(dia, "TERCA-FEIRA") == 0) {
            verificarTerca(placa);
        } else if (strcmp(dia, "QUARTA-FEIRA") == 0) {
            verificarQuarta(placa);
        } else if (strcmp(dia, "QUINTA-FEIRA") == 0) {
            verificarQuinta(placa);
        } else if (strcmp(dia, "SEXTA-FEIRA") == 0) {
            verificarSexta(placa);
        } else if (strcmp(dia, "SABADO") == 0) {
            printf("Não há proibição no fim de semana\n");
        } else if (strcmp(dia, "DOMINGO") == 0) {
            printf("Não há proibição no fim de semana\n");
        }
    } else if (strlen(placa) == 7 && placa[2] != '-') {
        if (strcmp(dia, "SEGUNDA-FEIRA") == 0) {
            verificarSegundaSul(placa);
        } else if (strcmp(dia, "TERCA-FEIRA") == 0) {
            verificarTercaSul(placa);
        } else if (strcmp(dia, "QUARTA-FEIRA") == 0) {
            verificarQuartaSul(placa);
        } else if (strcmp(dia, "QUINTA-FEIRA") == 0) {
            verificarQuintaSul(placa);
        } else if (strcmp(dia, "SEXTA-FEIRA") == 0) {
            verificarSextaSul(placa);
        } else if (strcmp(dia, "SABADO") == 0) {
            printf("Não há proibição no fim de semana\n");
        } else if (strcmp(dia, "DOMINGO") == 0) {
            printf("Não há proibição no fim de semana\n");
        } else if(verificar == 1){
            printf("Dia da semana inválido");
          }
    } else {
        printf("Placa inválida\n");
    }
    
    return 0;
}
